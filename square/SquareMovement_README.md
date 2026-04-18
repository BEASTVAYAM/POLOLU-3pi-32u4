# Square Movement Robot

## Overview
This Arduino program makes the robot move in a square path by repeating forward movement and right turns four times.

It is useful for testing motor coordination and basic navigation using the Pololu 3pi+ 32U4 robot.

## Features
- Moves forward in segments
- Performs right turns
- Completes a square path
- Stops after execution

## Hardware Requirements
- Pololu 3pi+ 32U4 Robot
- Built-in motors

## How It Works
1. Robot waits 2 seconds for setup
2. Loop runs 4 times:
   - Moves forward
   - Stops briefly
   - Turns right
   - Stops again
3. After completing 4 cycles (square), robot stops permanently

## Usage
1. Upload the code
2. Place robot on flat surface
3. Power on
4. Robot will move in a square path automatically

## Code Behavior
- setSpeeds(-55, -50) → Move forward  
- delay(2000) → Forward duration  
- setSpeeds(50, -45) → Turn right  
- Loop repeats 4 times for square  
- while(1) → Stop permanently  

## Notes
- Slight speed difference helps maintain straight motion
- Turning delay may need adjustment depending on surface
- Values can be tuned for better accuracy

## Possible Improvements
- Use sensors for precise turning
- Add PID control for straight movement
- Use encoders for accurate distance

## File Structure (GitHub)
```
/SquareMovement/
   SquareMovement.ino
   README.md
```
