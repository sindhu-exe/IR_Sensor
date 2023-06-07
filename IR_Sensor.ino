void setup() {
  pinMode(7, INPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.print("IR SENSOR IP: ");
  
  if (digitalRead(7) == HIGH) {
    Serial.println(" Not Detected");
  } else {
    Serial.println("Detected");
  }
  
  delay(500);
}

