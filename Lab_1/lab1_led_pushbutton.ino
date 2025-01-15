// Lab 1: Working of LED with a Push Button

// Pin assignments
const int buttonPin = 4; // Pin where the push button is connected
const int ledPin = 13;   // Pin where the LED is connected

// Variable to store the button state
int buttonState = 0;

void setup()
{
    // Initialize the LED pin as an output
    pinMode(ledPin, OUTPUT);

    // Initialize the push button pin as an input
    pinMode(buttonPin, INPUT);
}

void loop()
{
    // Read the state of the push button
    buttonState = digitalRead(buttonPin);

    // Check if the button is pressed
    if (buttonState == HIGH)
    {
        // Turn the LED on
        digitalWrite(ledPin, HIGH);
    }
    else
    {
        // Turn the LED off
        digitalWrite(ledPin, LOW);
    }

    // Optional delay for debounce
    delay(50);
}
