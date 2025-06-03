
#define TRIG_PIN 7
#define ECHO_PIN 6
#define LED_PIN 2

void setup() {
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  float duration;
  float distance;

  // Pulso no TRIG
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  duration = pulseIn(ECHO_PIN, HIGH);
  distance = duration * 0.034 / 2;

  Serial.print("Distância: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance < 10) { 
    digitalWrite(LED_PIN, HIGH);
    Serial.println("Test");
  } else {
    digitalWrite(LED_PIN, LOW);
  }

  delay(500);
}
