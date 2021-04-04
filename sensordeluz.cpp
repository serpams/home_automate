/*
  LDR sensor
              BY STUPIDCREATIVITY
*/

void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}
void loop() {
  float sensorValue = analogRead(A0);
  // Reads the analog input ranging from 0 to 1023
  Serial.println(sensorValue);
  if(sensorValue<=400)
  {
    digitalWrite(13,HIGH);
  }
  else
  digitalWrite(13,LOW);
}
