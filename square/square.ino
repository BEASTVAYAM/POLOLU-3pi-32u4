#include <Pololu3piPlus32U4.h>

using namespace Pololu3piPlus32U4;

Motors motors;

void setup()
{
  delay(2000); // time to place robot
}

void loop()
{
  // Rotate in place (clockwise)
  motors.setSpeeds(-100, 100);
  delay(5000); // spin for 5 seconds

  // Stop
  motors.setSpeeds(0, 0);

  while(1); // stop forever
}