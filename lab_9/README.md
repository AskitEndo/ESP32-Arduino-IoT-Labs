# Program 9: LED Scrolling Simulation from Left to Right and Right to Left 💡

## Program Description

This program simulates a **scrolling LED pattern** where a series of LEDs light up sequentially from left to right and then back from right to left. It demonstrates the use of arrays and loops in controlling multiple LEDs.

## Components Required

• 🛠️ **Arduino Board** (e.g., Arduino Uno, ESP32, etc.)  
 • 🔆 **5 LEDs**  
 • ⚡ **5 Current-Limiting Resistors (220Ω)**  
 • 🔌 **Jumper Wires**  
 • 🧩 **Breadboard**

## Pin Connections

| LED Number | Arduino Pin | Resistor |
| ---------- | ----------- | -------- |
| LED 1      | Pin 2       | 220Ω     |
| LED 2      | Pin 3       | 220Ω     |
| LED 3      | Pin 4       | 220Ω     |
| LED 4      | Pin 5       | 220Ω     |
| LED 5      | Pin 6       | 220Ω     |

## Required Functions

- `pinMode(pin, OUTPUT)`: Configures each LED pin as an output during the `setup()` function.
- `digitalWrite(pin, HIGH)`: Turns on the specified LED.
- `digitalWrite(pin, LOW)`: Turns off the specified LED.
- `delay(ms)`: Introduces a delay between LED transitions.

## How the Program Works

1.  **Setup Phase**: All LED pins are initialized as outputs using a `for` loop.
2.  **Scrolling Pattern**:
    - The LEDs are turned on sequentially from **left to right**.
    - The pattern is reversed, scrolling the LEDs from **right to left**.
3.  **Delay Mechanism**: A customizable delay is added between LED transitions for smooth scrolling.

## Notes

- The `delayTime` variable can be adjusted to change the scrolling speed.
- Ensure the current-limiting resistors are connected in series with the LEDs to protect them.
- You can increase or decrease the number of LEDs by modifying the `ledPins[]` array and `numLEDs` variable.

## Example Output

- LEDs light up in the following sequence:
  - Left to right: LED 1 → LED 2 → LED 3 → LED 4 → LED 5
  - Right to left: LED 5 → LED 4 → LED 3 → LED 2 → LED 1
