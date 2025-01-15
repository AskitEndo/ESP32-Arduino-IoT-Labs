
// Define LED pins
int oddLEDs[] = {2, 4, 6};  // Odd-numbered LEDs
int evenLEDs[] = {3, 5, 7}; // Even-numbered LEDs
int delayTime = 500;        // Delay between blinking in milliseconds

void setup()
{
    // Initialize odd LEDs as OUTPUT
    for (int i = 0; i < 3; i++)
    {
        pinMode(oddLEDs[i], OUTPUT);
        pinMode(evenLEDs[i], OUTPUT);
    }
}

void loop()
{
    // Blink odd LEDs ON
    for (int i = 0; i < 3; i++)
    {
        digitalWrite(oddLEDs[i], HIGH); // Turn ON odd LEDs
    }
    delay(delayTime); // Wait for the specified delay

    // Blink odd LEDs OFF
    for (int i = 0; i < 3; i++)
    {
        digitalWrite(oddLEDs[i], LOW); // Turn OFF odd LEDs
    }

    // Blink even LEDs ON
    for (int i = 0; i < 3; i++)
    {
        digitalWrite(evenLEDs[i], HIGH); // Turn ON even LEDs
    }
    delay(delayTime); // Wait for the specified delay

    // Blink even LEDs OFF
    for (int i = 0; i < 3; i++)
    {
        digitalWrite(evenLEDs[i], LOW); // Turn OFF even LEDs
    }

    // Add some delay between cycles (optional)
    delay(delayTime);
}
