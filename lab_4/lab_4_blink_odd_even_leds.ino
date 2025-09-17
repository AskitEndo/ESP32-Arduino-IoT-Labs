// Define LED pins
const int redLEDPin = 4;   // GPIO 4 for red (odd)
const int blueLEDPin = 13; // GPIO 13 for blue (even)

unsigned long lastSerialPrint = 0;
int number = 1; // Start from 1

void setup()
{
    pinMode(redLEDPin, OUTPUT);
    pinMode(blueLEDPin, OUTPUT);
    Serial.begin(115200); // Start serial communication
}

void loop()
{
    // Blink red LED (odd)
    digitalWrite(redLEDPin, HIGH);
    digitalWrite(blueLEDPin, LOW);
    delay(500);

    // Blink blue LED (even)
    digitalWrite(redLEDPin, LOW);
    digitalWrite(blueLEDPin, HIGH);
    delay(500);

    // Check if 1000ms passed for serial print
    if (millis() - lastSerialPrint >= 1000)
    {
        if (number % 2 == 0)
        {
            Serial.print("Even: ");
        }
        else
        {
            Serial.print("Odd: ");
        }
        Serial.println(number);
        number++;                   // Increment number
        lastSerialPrint = millis(); // Reset timer
    }
}