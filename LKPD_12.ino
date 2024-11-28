//Deni aril
//XI TAV 1
#include"DHT.h"
#define DHTPIN 32
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);
void setup() {
  Serial.begin(9600);
  dht.begin();}
  void loop() {
    float humidity = dht.readHumidity();
    float temperature = dht.readTemperature();
    if (isnan(humidity) || isnan(temperature)) {
      Serial.print("gagal membaca dari sensor dht 11");
    }else {
      Serial.print("Kelembapan: ");
      Serial.print( humidity);
      Serial.print("% suhu: ");
      Serial.print(temperature);
      Serial.println("°C ");}   
      delay(2000);}
