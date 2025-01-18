#include <DHT.h>
// Define the DHT sensor type and pin
#define DHTPIN 26     // For ESP32, you can use GPIO26
#define DHTTYPE DHT11 // DHT11 or DHT22, depending on your sensor
// Initialize the DHT sensor
DHT dht(DHTPIN, DHTTYPE);
void setup()
{
    // Start serial communication for displaying readings
    Serial.begin(9600);
    // Initialize the DHT sensor
    dht.begin();

    // Print a starting message
    Serial.println("DHTxx sensor reading example");
}

void loop()
{
    // Wait a few seconds between sensor readings
    delay(2000);
    // Read humidity (in percentage)
    float humidity = dht.readHumidity();
    // Read temperature in Celsius
    float temperatureC = dht.readTemperature();
    // Read temperature in Fahrenheit
    float temperatureF = dht.readTemperature(true);

    // Check if any reading failed and exit the loop
    if (isnan(humidity) || isnan(temperatureC) || isnan(temperatureF))
    {
        Serial.println("Failed to read from DHT sensor!");
        return;
    }
    // Compute the heat index in Fahrenheit
    float heatIndexF = dht.computeHeatIndex(temperatureF, humidity);
    // Compute the heat index in Celsius
    float heatIndexC = dht.computeHeatIndex(temperatureC, humidity, false);
    // Print the results to the Serial Monitor
    Serial.print("Humidity: ");
    Serial.print(humidity);
    Serial.print(" %\t");
    Serial.print("Temperature: ");
    Serial.print(temperatureC);
    Serial.print(" °C ");
    Serial.print(temperatureF);
    Serial.print(" °F\t");

    Serial.print("Heat index: ");
    Serial.print(heatIndexC);
    Serial.print(" °C ");
    Serial.print(heatIndexF);
    Serial.println(" °F");
}
