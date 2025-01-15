// Define the pin numbers for the red, yellow, and green LEDs
int red = 9;
int yellow = 8;
int green = 7;

void setup()
{
    // Set the LED pins as OUTPUT so we can control them
    pinMode(red, OUTPUT);
    pinMode(yellow, OUTPUT);
    pinMode(green, OUTPUT);
}

void loop()
{
    // Turn on the red light for 15 seconds (15000 milliseconds)
    digitalWrite(red, HIGH); // Red light ON
    delay(15000);            // Wait for 15 seconds
    digitalWrite(red, LOW);  // Red light OFF

    // Flash the yellow light with intervals
    // Flash 1: Yellow light ON for 1 second, OFF for 0.5 second
    digitalWrite(yellow, HIGH); // Yellow light ON
    delay(1000);                // Wait for 1 second
    digitalWrite(yellow, LOW);  // Yellow light OFF
    delay(500);                 // Wait for 0.5 second

    // Flash 2: Repeat the same flashing cycle
    digitalWrite(yellow, HIGH); // Yellow light ON
    delay(1000);                // Wait for 1 second
    digitalWrite(yellow, LOW);  // Yellow light OFF
    delay(500);                 // Wait for 0.5 second

    // Flash 3: Repeat again for more flashing
    digitalWrite(yellow, HIGH); // Yellow light ON
    delay(1000);                // Wait for 1 second
    digitalWrite(yellow, LOW);  // Yellow light OFF
    delay(500);                 // Wait for 0.5 second

    // Flash 4: Repeat for a fourth time
    digitalWrite(yellow, HIGH); // Yellow light ON
    delay(1000);                // Wait for 1 second
    digitalWrite(yellow, LOW);  // Yellow light OFF
    delay(500);                 // Wait for 0.5 second

    // Flash 5: One last flash of the yellow light
    digitalWrite(yellow, HIGH); // Yellow light ON
    delay(1000);                // Wait for 1 second
    digitalWrite(yellow, LOW);  // Yellow light OFF
    delay(500);                 // Wait for 0.5 second

    // Turn on the green light for 20 seconds (20000 milliseconds)
    digitalWrite(green, HIGH); // Green light ON
    delay(20000);              // Wait for 20 seconds
    digitalWrite(green, LOW);  // Green light OFF

    // Flash the yellow light again before switching back to red
    // Flash 1: Yellow light ON for 1 second, OFF for 0.5 second
    digitalWrite(yellow, HIGH); // Yellow light ON
    delay(1000);                // Wait for 1 second
    digitalWrite(yellow, LOW);  // Yellow light OFF
    delay(500);                 // Wait for 0.5 second

    // Flash 2: Repeat the same flashing cycle
    digitalWrite(yellow, HIGH); // Yellow light ON
    delay(1000);                // Wait for 1 second
    digitalWrite(yellow, LOW);  // Yellow light OFF
    delay(500);                 // Wait for 0.5 second

    // Flash 3: Repeat again for more flashing
    digitalWrite(yellow, HIGH); // Yellow light ON
    delay(1000);                // Wait for 1 second
    digitalWrite(yellow, LOW);  // Yellow light OFF
    delay(500);                 // Wait for 0.5 second
}
