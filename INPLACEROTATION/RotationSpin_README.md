# Rotation (Spin) Robot

## Overview
This Arduino program makes the robot rotate in place (clockwise) for 5 seconds and then stop permanently.

It is useful for testing motor direction, speed, and rotation behavior on the Pololu 3pi+ 32U4 robot.

## Features
- Spins in place (clockwise)
- Runs for a fixed duration (5 seconds)
- Stops completely after execution

## Hardware Requirements
- Pololu 3pi+ 32U4 Robot
- Built-in motors

## How It Works
1. Robot waits 2 seconds for setup
2. Motors run in opposite directions:
   - Left motor backward
   - Right motor forward
3. Robot spins in place for 5 seconds
4. Motors stop
5. Program enters infinite loop (robot stays stopped)

## Usage
1. Upload the code
2. Place robot on a flat surface
3. Power on
4. Robot will spin automatically after 2 seconds

## Code Behavior
- setSpeeds(-100, 100) → Rotate clockwise  
- delay(5000) → Spin duration  
- setSpeeds(0, 0) → Stop motors  
- while(1) → Stop program permanently  

## Notes
- Higher speed results in faster rotation
- Ensure enough space around the robot while spinning
- You can reverse direction by swapping motor values

## Possible Improvements
- Add counter-clockwise rotation
- Use gyro for precise angle turning
- Add button control

## File Structure (GitHub)
```
/RotationSpin/
   RotationSpin.ino
   README.md
```
