//Deni aril
//XI TAV 1
const int trigPin = 15;
const int echoPin = 2;
void setup() {
  Serial.begin(115200);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);}
void loop() {
  long duration, distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;
  if (distance > 200) {
    Serial.println("Tidak ada objek terdeteksi.");
  }else{
      Serial.println("jarak: ");
      Serial.println(distance);
      Serial.println(" cm");}
      delay(500);}
