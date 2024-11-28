# //Deni aril
 // XI TAV 1
#define MQ2pin 16
int sensorValue;
void setup() {
  Serial.begin(9600);
  Serial.println("memanaskan MQ2");
  delay(20000);}
  void loop() {
    sensorValue = digitalRead(MQ2pin);
    Serial.print("Digital Output: ");
    Serial.print( sensorValue);
    if (sensorValue) {
      Serial.println("  | Smoke/Gas: Tidak Terdeteksi");
    } else {
      Serial.println("  | Smoke/Gas: Terdeteksi");}
    delay(2000);}
