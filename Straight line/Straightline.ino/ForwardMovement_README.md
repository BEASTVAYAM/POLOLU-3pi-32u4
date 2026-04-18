# Basic Forward Movement Robot

## Overview
This Arduino program makes the robot move forward for 5 seconds and then stop permanently.

It is a simple test program to verify that the motors are working correctly on the Pololu 3pi+ 32U4 robot.

## Features
- Moves forward at constant speed
- Runs for a fixed duration (5 seconds)
- Stops completely after execution

## Hardware Requirements
- Pololu 3pi+ 32U4 Robot
- Built-in motors

## How It Works
1. The robot waits for 2 seconds (setup delay)
2. Motors run at a constant speed (-50, -50)
3. Robot moves forward for 5 seconds
4. Motors stop
5. Program enters infinite loop (robot stays stopped)

## Usage
1. Upload the code to your robot
2. Place the robot on a flat surface
3. Power it on
4. After 2 seconds, it will move forward automatically

## Code Behavior
- setSpeeds(-50, -50) → Moves robot forward  
- delay(5000) → Runs for 5 seconds  
- setSpeeds(0, 0) → Stops motors  
- while(1) → Stops program execution permanently  

## Notes
- Speed is low for controlled movement
- Negative values are used due to motor orientation
- Adjust speed values to change movement speed

## Possible Improvements
- Add button start instead of delay
- Add reverse movement
- Add turning functionality
- Integrate sensors for obstacle detection

## File Structure (GitHub)
```
/ForwardMovement/
   ForwardMovement.ino
   README.md
```
