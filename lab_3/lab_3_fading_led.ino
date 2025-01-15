
// Pin assignment for LED
const int ledPin = 4; // PWM pin where LED is connected

void setup()
{
    // Set the LED pin as an output
    pinMode(ledPin, OUTPUT);
}

void loop()
{
    // Fade the LED in (brightness increases)
    for (int brightness = 0; brightness <= 255; brightness += 5)
    {
        analogWrite(ledPin, brightness); // Set LED brightness
        delay(30);                       // Wait for 30 milliseconds before the next brightness change
    }

    // Fade the LED out (brightness decreases)
    for (int brightness = 255; brightness >= 0; brightness -= 5)
    {
        analogWrite(ledPin, brightness); // Set LED brightness
        delay(30);                       // Wait for 30 milliseconds before the next brightness change
    }
}
