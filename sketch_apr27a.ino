int led = 2;
int entry = 0;
void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  if (Serial.available() > 0) {
    entry = Serial.read();
    if (entry == '1') {
      digitalWrite(led, HIGH);
    }
    else if (entry == '0') {
      digitalWrite(led, LOW);
    }
    else {
      Serial.println("invalid input");
    }
  }
}
