
int irSensorPin = 7; // Pin where the IR sensor is connected
int ledPin = 13;     // Optional: Built-in LED on most Arduino boards
void setup()
{
    pinMode(irSensorPin, INPUT); // Set the IR sensor pin as input
    pinMode(ledPin, OUTPUT);     // Set the LED pin as output (for indication)
    Serial.begin(9600);          // Initialize serial communication for debugging
}
void loop()
{
    int sensorValue = digitalRead(irSensorPin); // Read the IR sensor's output
    if (sensorValue == LOW)
    {
        // Object detected (change to HIGH if needed)
        Serial.println("Collision Detected!");
        digitalWrite(ledPin, HIGH); // Turn on LED if collision detected
    }
    else
    {
        Serial.println("No Collision");
        digitalWrite(ledPin, LOW); // Turn off LED if no collision
    }
    delay(100); // Small delay to prevent too frequent polling
}
