# Line Following Robot (Tinkercad Prototype)

This repository contains my first complete robotics project: a **line-following robot** designed and built in **Tinkercad Circuits**.  
This is the **online simulation version** of the robot. I plan to build the **physical version** using real components soon.

---

## 🔧 Project Summary
This project simulates an Arduino-powered robot that can follow a black line using two IR sensors and a dual H-bridge motor driver (L293D).  
The goal of this build was to learn:

- How to power and wire the L293D correctly  
- How to control two DC motors independently  
- How to connect and read IR line sensors  
- How to test robotics code in Tinkercad  
- How to organize a full electronics + code project  
- How to document a robotics build for GitHub  

---

## 🧩 Hardware Used (Virtual in Tinkercad)
- Arduino Uno  
- L293D Motor Driver  
- 2 × DC Motors  
- 2 × IR Line Sensors  
- Breadboard  
- 9V Battery (for motor voltage supply)  
- Jumper Wires  

---

## ⚡ Wiring Overview
- Arduino 5V → L293D logic power (pin 16)  
- 9V battery → L293D motor power (pin 8)  
- All L293D grounds → shared GND  
- Left motor → outputs 1Y & 2Y  
- Right motor → outputs 3Y & 4Y  
- IR sensors connected to A0 and A1  
- Enable pins connected to Arduino PWM pins  

A full wiring diagram is included in the Tinkercad project file (if you add it to the repo).

---

## 🧠 Features Implemented
- Independent motor control  
- Line detection using IR sensors  
- Basic line-following logic  
- Clean, commented code  
- Tested entirely in Tinkercad’s simulator  

---

## 📄 Files Included
- `schematic.png` — screenshot of the circuit  
- `tinkercad_screenshot.png` — online build screenshot  
- `code.ino` — Arduino code used in the simulation  
- `what-i-learned.md` — reflections & lessons from the project 

More files will be added when I begin the real-world build.

---

## 🏗️ Future Plans
- Build the **physical version** of this robot  
- Add improvements like:
  - PID motor control  
  - Adjustable speed modes  
  - LEDs for sensor debugging  
- Create a full tutorial  
- Upload documentation photos of the physical build  

---

## 📚 Skills Practiced
- Circuit design  
- Motor driver wiring  
- Sensor integration  
- Debugging with serial output  
- C++ basic structure  
- Robotics logic design  
- GitHub project organization  

---

## 🏁 Status
**Online version:** ✔ Completed  
**Physical robot:** 🔧 Coming soon  
**PID tuning:** 🔧 Planned  
**Documentation:** 📄 In progress  

---

## 📬 Contact / Notes
If you’re learning Arduino or robotics, feel free to use this repo as a reference.  
I will continue updating this project as the physical build progresses.
