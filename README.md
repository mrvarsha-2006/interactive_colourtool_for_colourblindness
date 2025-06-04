# 🎨 Interactive Colour Tool for Colour-Blindness

This Arduino-based mini-project is designed to assist individuals with colour blindness by detecting and displaying colours using an LCD. It helps colour-blind users distinguish between common colours, aiding in tasks like identifying clothes, medicines, or traffic signals.

---

## 💡 Features

- Detects colours like Red, Blue, Green, Yellow, Pink, Orange, etc.
- Displays detected colour on a 16x2 LCD
- Uses RGB detection via TCS3200 colour sensor
- Simple and affordable assistive device
- ~93% success rate in detection

---

## ⚙️ Components Used

| Component             | Description                            |
|-----------------------|----------------------------------------|
| Arduino Uno           | Microcontroller board                  |
| TCS3200 Colour Sensor | Detects RGB light reflection           |
| 16x2 LCD              | Displays the colour name               |
| I2C Module            | Simplifies LCD connection              |
| Jumper Wires          | Electrical connections                 |
| Power Source          | 5V USB or adapter                      |

---

## 🔧 Working Principle

1. The TCS3200 sensor captures the light reflected from an object.
2. The Arduino Uno reads and processes RGB frequency values.
3. Based on predefined thresholds, it identifies the colour.
4. The name of the colour is displayed on an LCD.

---

## 🖥️ Arduino Code 

The Arduino IDE is used to upload the sketch that:
- Initializes sensor and LCD
- Reads pulse width for Red, Green, and Blue
- Compares RGB values to known thresholds
- Displays the closest colour match on LCD

---

## 🚀 Future Scope

- Add audio feedback for colour name
- Convert to wearable device (e.g., glasses)
- Real-time mobile app integration
- Use AI for better colour classification

---

## 👩‍🔬 Authors

- **Varsha M R** 
- **Janani S** 

Project done as part of **Mini-project(23BM353)** at **Mepco Schlenk Engineering College**, November 2024.

---

## 📖 References

1. Akriti Kaushik et al., *The RGB Colour Sensing Technique*, IJARSE, 2013
2. Mingwei Liu et al., *Intelligent Machine Design Lab Vocalizer*, IRJET, 2011
3. Tushar G. et al., *Object Sorting using Color Sensor and Arduino*, IJRIITCC, 2018

---




