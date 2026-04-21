#include <Pololu3piPlus32U4.h>

using namespace Pololu3piPlus32U4;

Buzzer buzzer;
LineSensors lineSensors;
Motors motors;
ButtonA buttonA;
ButtonB buttonB;

// --- MANUAL PID TUNING ---
float Kp = 0.28;  
float Ki = 0; 
float Kd = 2;   

uint16_t maxSpeed = 230;
uint16_t baseSpeed = 180;
int16_t minSpeed = 0;

// --- LINE DETECTION SETTINGS ---
// If all sensors read below this value, the robot stops.
// (0 = pure white, 1000 = pure black)
const uint16_t lineThreshold = 40; 

// Tracking variables
int16_t lastError = 0;
float integral = 0; 

#define NUM_SENSORS 5
unsigned int lineSensorValues[NUM_SENSORS];

void calibrateSensors() {
  delay(1000);
  for(uint16_t i = 0; i < 80; i++) {
    if (i > 20 && i <= 60) motors.setSpeeds(-60, 60);
    else motors.setSpeeds(60, -60);
    lineSensors.calibrate();
  }
  motors.setSpeeds(0, 0);
  buzzer.play("! L32 cdeg");
}

void setup() {
  motors.flipLeftMotor(true);
  motors.flipRightMotor(true);

  while(!buttonA.getSingleDebouncedPress());
  calibrateSensors();

  while(!buttonB.getSingleDebouncedPress());
  delay(500);
  buzzer.play("L16 cdegreg4");
}

void loop() {
  // 1. Read the sensors
  int16_t position = lineSensors.readLineBlack(lineSensorValues);

  // 2. CHECK IF LINE IS PRESENT
  bool lineDetected = false;
  for (uint8_t i = 0; i < NUM_SENSORS; i++) {
    if (lineSensorValues[i] > lineThreshold) {
      lineDetected = true;
      break; 
    }
  }

  // 3. EMERGENCY STOP LOGIC
  if (!lineDetected) {
    motors.setSpeeds(0, 0);
    integral = 0;   // Clear memory so it doesn't "jump" when replaced on line
    lastError = 0;
    return;         // Skip the PID math and start loop over
  }

  // 4. PID MATH (Only runs if line is detected)
  int16_t error = position - 2000;

  integral += error;
  integral = constrain(integral, -10000, 10000); 

  if ((error > 0 && lastError < 0) || (error < 0 && lastError > 0)) {
    integral = 0;
  }

  float pTerm = error * Kp;
  float iTerm = integral * Ki;
  float dTerm = (error - lastError) * Kd;

  float speedDifference = pTerm + iTerm + dTerm;
  lastError = error;

  // 5. SET MOTOR SPEEDS
  int16_t leftSpeed = (int16_t)baseSpeed + speedDifference;
  int16_t rightSpeed = (int16_t)baseSpeed - speedDifference;

  leftSpeed = constrain(leftSpeed, minSpeed, (int16_t)maxSpeed);
  rightSpeed = constrain(rightSpeed, minSpeed, (int16_t)maxSpeed);

  motors.setSpeeds(leftSpeed, rightSpeed);
}