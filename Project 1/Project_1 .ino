#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DHT.h>

#define DHTPIN 4          // DHT22 DATA pin
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);


LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  Serial.begin(115200);

  dht.begin();

  lcd.init();
  lcd.backlight();

  lcd.setCursor(0,0);
  lcd.print("Smart Env");
  lcd.setCursor(0,1);
  lcd.print("Monitor");
  delay(2000);

  lcd.clear();
}

void loop() {

  float h = dht.readHumidity();
  float t = dht.readTemperature();

  if (isnan(h) || isnan(t)) {
    Serial.println("Failed to read DHT22");

    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Sensor Error");

    delay(2000);
    return;
  }

  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.print(" C   ");

  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.println(" %");

  lcd.clear();

  lcd.setCursor(0,0);
  lcd.print("Temp:");
  lcd.print(t,1);
  lcd.print((char)223);
  lcd.print("C");

  lcd.setCursor(0,1);
  lcd.print("Hum :");
  lcd.print(h,1);
  lcd.print("%");

  delay(2000);
}
