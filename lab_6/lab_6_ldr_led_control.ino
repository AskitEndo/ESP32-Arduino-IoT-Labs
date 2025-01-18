
// Pin Definitions
const int ldrPin = 34; // Analog pin connected to LDR
const int ledPin = 25; // PWM pin connected to LED

void setup()
{
    Serial.begin(115200);    // Initialize Serial for debugging
    pinMode(ledPin, OUTPUT); // Set LED pin as output
                             // pinMode(ldrPin, INPUT); // LDR pin is inherently input
}

void loop()
{
    // Read LDR value (0-4095 for ESP32, 0-1023 for Arduino)
    int ldrValue = analogRead(ldrPin);

    // Print LDR value to Serial Monitor for debugging
    Serial.print("LDR Value: ");
    Serial.println(ldrValue);

    // Map the LDR value to LED brightness (0-255 for PWM)
    int ledBrightness = map(ldrValue, 0, 1023, 255, 0); // Inverse mapping for brightness

    // Set the LED brightness
    analogWrite(ledPin, ledBrightness);

    // Add a small delay
    delay(100);
}
