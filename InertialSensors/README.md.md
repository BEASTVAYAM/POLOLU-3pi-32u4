# Inertial Sensors Line Follower

## Overview
This program implements a basic line-following robot using sensor readings to determine its position relative to a line and adjust motor speeds accordingly.

## Features
- Uses line sensors to detect position
- Simple decision-based movement (no PID)
- LED indicators for direction
- Buzzer feedback on startup

## How It Works
- Reads line position using `readLineBlack()`
- Left deviation → turn left
- Center → move straight
- Right deviation → turn right

## Hardware Requirements
- Pololu 3pi+ 32U4 Robot

## Usage
1. Upload code
2. Calibrate sensors
3. Run robot on line

## Improvements
- Add PID control
- Dynamic speed adjustment
