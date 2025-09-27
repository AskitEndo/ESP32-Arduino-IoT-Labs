#include <Adafruit_GFX.h>
#include <Adafruit_ST7735.h>
#include <SPI.h>
#include <DHT.h>

// Define DHT sensor type and pin
#define DHTPIN 26     // Digital pin connected to the DHT sensor
#define DHTTYPE DHT11 // DHT11 or DHT22 depending on the sensor you're using

// SPI LCD pins
#define TFT_CS 5
#define TFT_RST 17
#define TFT_DC 16

// Initialize the DHT sensor and TFT display
DHT dht(DHTPIN, DHTTYPE);
Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_RST);

void setup()
{
    // Initialize serial communication
    Serial.begin(115200);

    // Initialize the DHT sensor
    dht.begin();

    // Initialize the TFT display
    tft.initR(INITR_BLACKTAB); // For most red-tab TFTs
    tft.fillScreen(ST77XX_BLACK);
    tft.setTextColor(ST77XX_WHITE);
    tft.setTextSize(2);

    // Display a welcome message
    tft.setCursor(10, 10);
    tft.print("Room Temp:");
    delay(2000); // Wait for 2 seconds
}

void loop()
{
    // Read temperature from the DHT sensor
    float temp = dht.readTemperature();

    // Clear previous temperature reading
    tft.fillRect(0, 40, 160, 30, ST77XX_BLACK);

    // Check if the reading was successful
    if (isnan(temp))
    {
        Serial.println("Failed to read from DHT sensor!");
        tft.setCursor(10, 40);
        tft.print("Sensor Error");
    }
    else
    {
        // Print the temperature to the Serial Monitor
        Serial.print("Temperature: ");
        Serial.print(temp);
        Serial.println(" *C");

        // Display the temperature on the TFT
        tft.setCursor(10, 40);
        tft.print("Temp: ");
        tft.print(temp);
        tft.print(" C");
    }

    // Wait for 2 seconds before the next reading
    delay(2000);
}