# Zig-Zag Movement Robot

## Overview
This Arduino program makes the robot move in a zig-zag pattern by alternating motor speeds.

It is useful for testing directional control and curved motion on the Pololu 3pi+ 32U4 robot.

## Features
- Zig-zag movement pattern
- Adjustable number of turns
- Smooth alternating curves
- Stops after execution

## Hardware Requirements
- Pololu 3pi+ 32U4 Robot
- Built-in motors

## How It Works
1. Robot waits 2 seconds for setup
2. Loop runs 6 times:
   - Moves forward with slight right curve
   - Moves forward with slight left curve
3. After completing zig-zag pattern, robot stops permanently

## Usage
1. Upload the code
2. Place robot on flat surface
3. Power on
4. Robot will start zig-zag movement automatically

## Code Behavior
- setSpeeds(-200, -120) → Curve right  
- setSpeeds(-120, -200) → Curve left  
- delay(1000) → Duration of each segment  
- Loop repeats 6 times  
- while(1) → Stop permanently  

## Notes
- Speed difference creates curved motion
- Increase loop count for longer zig-zag path
- Adjust delay for sharper or wider turns

## Possible Improvements
- Add sensor-based navigation
- Use PID for smoother curves
- Add obstacle avoidance

## File Structure (GitHub)
```
/ZigZagMovement/
   ZigZagMovement.ino
   README.md
```
