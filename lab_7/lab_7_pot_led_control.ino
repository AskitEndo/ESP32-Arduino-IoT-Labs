
// Pin Definitions
int potPin = 4; // Analog pin connected to the potentiometer
int ledPin = 9; // PWM-enabled pin connected to the LED

void setup()
{
    pinMode(ledPin, OUTPUT); // Set the LED pin as output
    Serial.begin(9600);      // Initialize serial communication for debugging
}

void loop()
{
    int potValue = analogRead(potPin);                  // Read the potentiometer value (0-1023)
    int ledBrightness = map(potValue, 0, 1023, 0, 255); // Map value to PWM range (0-255)
    analogWrite(ledPin, ledBrightness);                 // Set LED brightness

    // Debugging: Print potentiometer value and corresponding LED brightness
    Serial.print("Potentiometer Value: ");
    Serial.print(potValue);
    Serial.print(" -> LED Brightness: ");
    Serial.println(ledBrightness);

    delay(100); // Small delay for smoother transition
}
