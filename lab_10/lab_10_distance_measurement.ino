// Define the pins for TRIG and ECHO
const int trigPin = 3; // TRIG pin connected to digital pin 3
const int echoPin = 2; // ECHO pin connected to digital pin 2

void setup()
{
    // Set up the serial monitor
    Serial.begin(9600);

    // Set TRIG as OUTPUT and ECHO as INPUT
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
}

void loop()
{
    // Ensure the TRIG pin is low for a short time before sending a pulse
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);

    // Send a 10µs pulse on the TRIG pin
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    // Read the time for the echo pulse (in microseconds)
    long duration = pulseIn(echoPin, HIGH);

    // Calculate the distance in cm (speed of sound = 34300 cm/s)
    float distance = (duration * 0.0343) / 2;

    // Print the distance to the serial monitor
    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");

    // Add a short delay before the next reading
    delay(1000); // 1 second delay
}