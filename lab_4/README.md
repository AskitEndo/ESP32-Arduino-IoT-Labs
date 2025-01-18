# Program 4: Blink 6 LEDs in Odd and Even Fashion 💡

## Program Description

This program demonstrates how to blink 6 LEDs in an alternating pattern: odd-numbered LEDs blink first, followed by even-numbered LEDs. The odd LEDs blink ON and OFF, followed by the even LEDs, all with a specified delay between states.

## Components Required

• 🛠️ **Arduino Board** (e.g., Arduino Uno, ESP32)  
• 💡 **6 x LEDs**  
• 🔌 **Jumper Wires**  
• 🧩 **Breadboard**  
• ⚡ **Resistors** (220 ohms for each LED)

## Pin Connections

<table>  
  <thead>  
    <tr>  
      <th>Component</th>  
      <th>Pin on Arduino</th>  
    </tr>  
  </thead>  
  <tbody>  
    <tr>  
      <td>Odd LEDs</td>  
      <td>Pin 2, Pin 4, Pin 6</td>  
    </tr>  
    <tr>  
      <td>Even LEDs</td>  
      <td>Pin 3, Pin 5, Pin 7</td>  
    </tr>  
  </tbody>  
</table>

## Required Libraries

No additional libraries are required for this program. It uses the built-in functions of the Arduino core.

## How the Program Works

1. **Pin Setup**: The LEDs are connected to digital pins on the Arduino board (pins 2, 3, 4, 5, 6, 7). Odd-numbered LEDs are connected to pins 2, 4, and 6, while even-numbered LEDs are connected to pins 3, 5, and 7. These pins are set as OUTPUT in the `setup()` function.

<!-- 2. **Odd LEDs Blinking**: The odd LEDs are turned ON for `delayTime` milliseconds, then turned OFF. -->

3. **Even LEDs Blinking**: The even LEDs are turned ON for `delayTime` milliseconds, then turned OFF.

4. **Continuous Loop**: This pattern repeats continuously in the `loop()` function, with each set of LEDs blinking alternately.

<!-- ## Circuit Diagram

<img src="lab_4_board.png" alt="Lab 4 Circuit Diagram" /> -->

## Notes

• ⚙️ Ensure that each LED is connected with a current-limiting resistor (typically 220 ohms).  
• 🖥️ The delay time can be adjusted to control how fast the LEDs blink.
