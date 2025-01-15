# Program 5: Rotate Servo Motor in Clockwise and Anticlockwise Directions 🤖

## Program Description

This program demonstrates how to control a servo motor, rotating it clockwise from 0 to 180 degrees and then counterclockwise from 180 to 0 degrees. The servo motor rotates continuously in these directions with a short pause at each extreme.

## Components Required

• 🛠️ **Arduino Board** (e.g., Arduino Uno, ESP32)  
• ⚙️ **Servo Motor**  
• 🔌 **Jumper Wires**  
• 🧩 **Breadboard**  
• 🔋 **Power Supply for Servo**

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
      <td>Servo Motor</td>  
      <td>Pin 9</td>  
    </tr>  
  </tbody>  
</table>

## Required Libraries

• `Servo.h`: This library is used to control the servo motor.

## How the Program Works

1. **Servo Initialization**: The `Servo` library is included, and a `Servo` object (`myServo`) is created to control the servo motor. The servo is attached to pin 9 in the `setup()` function.

2. **Clockwise Rotation**: The servo rotates from 0 to 180 degrees in steps of 1 degree, with a 15-millisecond delay between each step to allow the servo to reach the position.

3. **Pause**: After the clockwise rotation is complete, the servo holds its position for 1 second.

4. **Counterclockwise Rotation**: The servo rotates from 180 to 0 degrees, with a 15-millisecond delay between each step, just like in the clockwise rotation.

5. **Continuous Loop**: The `loop()` function repeats the process, causing the servo to continuously rotate in a clockwise and counterclockwise manner with pauses at each extreme.

<!-- ## Circuit Diagram

<img src="lab_5_board.png" alt="Lab 5 Circuit Diagram" /> -->

## Notes

• ⚡ Ensure that the servo motor is connected to a power source that provides sufficient current, as servos can draw significant power.  
• 🖥️ The delay between each position ensures smooth motion of the servo motor. You can adjust this value to control the speed of the rotation.
