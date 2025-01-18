#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DHT.h>

// Define DHT sensor type and pin
#define DHTPIN 26     // Digital pin connected to the DHT sensor
#define DHTTYPE DHT11 // DHT11 or DHT22 depending on the sensor you're using

// Initialize the DHT sensor and LCD display
DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal_I2C lcd(0x27, 16, 2); // Set the LCD address to 0x27 for a 16x2 display

void setup()
{
    // Initialize serial communication
    Serial.begin(115200);

    // Initialize the DHT sensor
    dht.begin();

    // Initialize the LCD
    lcd.init();
    lcd.backlight();

    // Display a welcome message
    lcd.setCursor(0, 0); // Set cursor to first row, first column
    lcd.print("Room Temp:");
    delay(2000); // Wait for 2 seconds
    lcd.clear(); // Clear the LCD
}

void loop()
{
    // Read temperature from the DHT sensor
    float temp = dht.readTemperature();

    // Check if the reading was successful
    if (isnan(temp))
    {
        Serial.println("Failed to read from DHT sensor!");
        lcd.setCursor(0, 0);
        lcd.print("Sensor Error");
        return;
    }

    // Print the temperature to the Serial Monitor
    Serial.print("Temperature: ");
    Serial.print(temp);
    Serial.println(" *C");

    // Display the temperature on the LCD
    lcd.setCursor(0, 0); // First row, first column
    lcd.print("Room Temp:");
    lcd.setCursor(0, 1); // Second row, first column
    lcd.print("Temp: ");
    lcd.print(temp);
    lcd.print((char)223); // Degree symbol
    lcd.print("C");

    // Wait for 2 seconds before the next reading
    delay(2000);
}