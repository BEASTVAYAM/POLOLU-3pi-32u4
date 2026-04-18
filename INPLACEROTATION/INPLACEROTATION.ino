#include <Pololu3piPlus32U4.h>

using namespace Pololu3piPlus32U4;

Motors motors;

void setup()
{
  delay(2000);
}

void loop()
{
  for(int i = 0; i < 6; i++) // number of zig-zags
  {
    // Forward + slight right
    motors.setSpeeds(-200, -120);
    delay(500);

    // Forward + slight left
    motors.setSpeeds(-120, -200);
    delay(500);
  }

  // Stop
  motors.setSpeeds(0, 0);
  while(1);
}