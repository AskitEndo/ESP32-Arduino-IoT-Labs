
#include <Servo.h>

Servo myServo; // create servo object to control a servo

void setup()
{
    myServo.attach(9); // attaches the servo on pin 9 to the servo object
}

void loop()
{
    // Rotate the servo clockwise from 0 to 180 degrees
    for (int angle = 0; angle <= 180; angle += 1)
    {
        myServo.write(angle); // Set the servo position
        delay(15);            // Wait for the servo to reach the position
    }

    delay(1000); // Hold the position for 1 second

    // Rotate the servo counter-clockwise from 180 to 0 degrees
    for (int angle = 180; angle >= 0; angle -= 1)
    {
        myServo.write(angle); // Set the servo position
        delay(15);            // Wait for the servo to reach the position
    }

    delay(1000); // Hold the position for 1 second
}
