// Define the LED pins connected to the microcontroller
const int ledPins[] = {2, 3, 4, 5, 6}; // Array to hold LED pin numbers
const int numLEDs = 5;                 // Total number of LEDs in the array
int delayTime = 100;                   // Time delay between LED changes in milliseconds

void setup()
{
    // Configure all LED pins as OUTPUT
    for (int i = 0; i < numLEDs; i++)
    {
        pinMode(ledPins[i], OUTPUT); // Set each LED pin as an output pin
    }
}

void loop()
{
    // Scroll LEDs from left to right
    for (int i = 0; i < numLEDs; i++) // Iterate over each LED from left to right
    {
        digitalWrite(ledPins[i], HIGH); // Turn ON the current LED
        delay(delayTime);               // Wait for the specified delay
        digitalWrite(ledPins[i], LOW);  // Turn OFF the current LED
    }

    // Scroll LEDs from right to left
    for (int i = numLEDs - 1; i >= 0; i--) // Iterate over each LED from right to left
    {
        digitalWrite(ledPins[i], HIGH); // Turn ON the current LED
        delay(delayTime);               // Wait for the specified delay
        digitalWrite(ledPins[i], LOW);  // Turn OFF the current LED
    }
}
