#include <Pololu3piPlus32U4.h>

using namespace Pololu3piPlus32U4;

Motors motors;

void setup()
{
  delay(2000); // time to place robot
}

void loop()
{
  for(int i = 0; i < 3; i++) // run infinity loop 3 times
  {
    // Left curve
    motors.setSpeeds(-200, -100);
    delay(2500);

    // Smooth crossover
    motors.setSpeeds(-200, -200);
    delay(300);

    // Right curve
    motors.setSpeeds(-100, -200);
    delay(2500);

    // Smooth crossover
    motors.setSpeeds(-200, -200);
    delay(300);
  }

  // Stop after 3 loops
  motors.setSpeeds(0, 0);

  while(1); // stop forever
}