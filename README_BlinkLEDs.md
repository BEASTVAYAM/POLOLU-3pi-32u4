# 💡 Blink All LEDs (Pololu 3pi+)

## 📌 Description
This program demonstrates how to blink all three onboard user LEDs (Red, Yellow, and Green) on the Pololu 3pi+ 32U4 robot.

---

## ⚙️ Working Principle
- All three LEDs are turned ON simultaneously  
- The system waits for 1 second  
- All LEDs are turned OFF  
- The system waits for another 1 second  
- This cycle repeats continuously  

---

## 🧠 Concepts Used
- LED control using Pololu library  
- Delay-based timing  
- Infinite loop execution  

---

## ▶️ How to Run
1. Open the `.ino` file in Arduino IDE  
2. Connect your Pololu 3pi+ robot via USB  
3. Select the correct board and COM port  
4. Click the Upload button  

---

## 🧩 Required Library
- Pololu3piPlus32U4

---

## 🔍 Code Explanation
- `ledRed(1)`, `ledYellow(1)`, `ledGreen(1)` → Turns LEDs ON  
- `ledRed(0)`, `ledYellow(0)`, `ledGreen(0)` → Turns LEDs OFF  
- `delay(1000)` → Waits for 1000 milliseconds (1 second)  

---

## 📷 Output
All three LEDs blink ON and OFF together at a 1-second interval.

---

## 🚀 Future Improvements
- Blink LEDs in sequence instead of together  
- Add button control to toggle LEDs  
- Use non-blocking delay (millis) for better performance  
