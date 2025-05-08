# Triple-LED-Dimmer  
## Analog Input. PWM Output. Full Control.

**Fourth step** in the embedded grind. This isn’t just about lighting up LEDs—it’s about using analog input to shape digital output. **3 LEDs. 1 potentiometer. Real-time brightness control.** Precision through code.

---

## 🧭 Why This Matters

Control is the name of the game. You’re not guessing—you’re sensing. Potentiometers simulate real-world input devices like volume knobs, dimmers, and control dials. This is the gateway to full analog/digital interfacing.

### ⚙️ What I Learned

- `analogRead()` grabs real-world values  
- `analogWrite()` translates that into PWM output  
- Analog control = more than ON/OFF logic  
- Real-time feedback makes systems feel alive  

---

## 🔩 Parts I Used

![Components](Components.jpg)
---

## 📈 Schematic

![Schematic](Schematic.png)

---

## 🛠️ Wiring

![Wiring](GIF/Wiring.gif)

---

## 👨‍💻 The Code

```cpp
int sensorPin = A0;
int redLED = 9;
int greenLED = 10;
int blueLED = 11;

void setup() {
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
}

void loop() {
  int sensorValue = analogRead(sensorPin);
  int brightness = map(sensorValue, 0, 1023, 0, 255);

  analogWrite(redLED, brightness);
  analogWrite(greenLED, brightness);
  analogWrite(blueLED, brightness);

  delay(10); // Smooth response
}
```

## 🧠 The Concept
You turn the knob, and the LEDs respond. Smooth. Controlled. This isn’t guesswork—it’s analog input driving precise PWM signals. The logic is simple. The effect is powerful.

## 🎬 Final Result
One dial. Three LEDs. Infinite brightness levels.
