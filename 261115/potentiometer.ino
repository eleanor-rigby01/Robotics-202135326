#define POT_PIN 39

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = analogRead(POT_PIN);
  Serial.println(value);
  delay(50);
}
