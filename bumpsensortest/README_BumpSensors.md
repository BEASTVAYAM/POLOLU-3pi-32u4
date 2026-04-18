# 🤖 Bump Sensors with LED, Buzzer & Display (Pololu 3pi+)

## 📌 Description
This program demonstrates how to use the bump sensors on the Pololu 3pi+ 32U4 robot. When the robot is bumped on either side, it responds using LEDs, buzzer sounds, and display output.

---

## ⚙️ Working Principle
- The robot continuously reads the bump sensors  
- When the left sensor is pressed:
  - Yellow LED turns ON  
  - A sound is played  
  - "L" is displayed  
- When the right sensor is pressed:
  - Red LED turns ON  
  - A different sound is played  
  - "R" is displayed  
- When released, LEDs turn OFF and display clears  

---

## 🧠 Concepts Used
- Bump sensor input handling  
- LED control  
- Buzzer sound generation  
- OLED display output  
- Event detection (press/release)  

---

## ▶️ How to Run
1. Open the `.ino` file in Arduino IDE  
2. Connect your Pololu 3pi+ robot via USB  
3. Select the correct board and COM port  
4. Upload the code  
5. Press the left or right bump sensors to see the response  

---

## 🧩 Required Library
- Pololu3piPlus32U4  

---

## 🔍 Code Explanation
- `bumpSensors.read()` → Reads current sensor state  
- `leftChanged()` / `rightChanged()` → Detects state change  
- `leftIsPressed()` / `rightIsPressed()` → Checks if pressed  
- `ledYellow()` / `ledRed()` → Controls LEDs  
- `buzzer.play()` → Plays sound tones  
- `display.print()` → Shows output on screen  

---

## 📷 Output
- Press left → Yellow LED + sound + "L" on display  
- Press right → Red LED + sound + "R" on display  

---

## 🚀 Future Improvements
- Add motor reaction (move backward on bump)  
- Combine both sensors for obstacle avoidance  
- Display more detailed messages  

