#include <Pololu3piPlus32U4.h>

using namespace Pololu3piPlus32U4;

Motors motors;

void setup()
{
  delay(2000); // time to place robot
}

void loop()
{
  for(int i = 0; i < 4; i++)
  {
    // Move forward (corrected)
    motors.setSpeeds(-55, -50);
    delay(2000);

    // Stop
    motors.setSpeeds(0, 0);
    delay(500);

    // Turn right (adjust if needed)
    motors.setSpeeds(50,-45);
    delay(500);

    // Stop after turn
    motors.setSpeeds(0, 0);
    delay(500);
  }

  // Stop forever
  motors.setSpeeds(0, 0);
  while(1);
}