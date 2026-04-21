# PID Line Follower with Line-Loss Safety

## Overview
This program implements an advanced PID-based line follower using the Pololu 3pi+ 32U4 robot.

It includes:
- PID control (Proportional, Integral, Derivative)
- Sensor calibration
- Button-controlled start
- Emergency stop when the line is lost

---

## Features
- Smooth and accurate line following
- Manual PID tuning (Kp, Ki, Kd)
- Automatic sensor calibration
- Line-loss detection (robot stops if line is lost)
- Buzzer feedback
- Button-controlled workflow

---

## Hardware Requirements
- Pololu 3pi+ 32U4 Robot
- Built-in line sensors
- Buttons A and B
- Buzzer

---

## How It Works

### 1. Calibration Phase
- Press **Button A**
- Robot rotates to calibrate sensors
- Buzzer confirms completion

### 2. Start Phase
- Press **Button B**
- Robot starts line following

### 3. Line Detection
- Sensors check if line is present
- If no line detected → robot stops immediately

### 4. PID Control
- Error = position - center (2000)
- PID formula:
  - P = error × Kp
  - I = accumulated error × Ki
  - D = change in error × Kd

### 5. Motor Adjustment
- Left and right speeds adjusted dynamically
- Keeps robot centered on line

---

## PID Parameters

| Parameter | Value | Description |
|----------|------|-------------|
| Kp | 0.28 | Controls response strength |
| Ki | 0 | Not used (disabled) |
| Kd | 2 | Reduces oscillation |

---

## Usage

1. Upload the code
2. Place robot on track
3. Press **Button A** (calibration)
4. Press **Button B** (start)
5. Robot follows line automatically

---

## Safety Feature

If all sensors read below threshold:
- Robot **stops immediately**
- Prevents it from running off track

---

## Notes
- Tune Kp and Kd for better performance
- Ki is disabled to avoid overshooting
- Works best on high-contrast tracks

---

## File Structure (GitHub)
```
/PID_LineFollower_Safe/
   PID_LineFollower_Safe.ino
   README.md
```
