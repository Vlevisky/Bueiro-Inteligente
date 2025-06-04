#include <ArduinoJson.h>

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

  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  duration = pulseIn(ECHO_PIN, HIGH);
  distance = duration * 0.034 / 2;

  StaticJsonDocument<100> doc;
  doc["distancia"] = distance;

  serializeJson(doc, Serial);
  Serial.println();
  if (distance <= 10){
    digital.write(LED_PIN,HIGH);
  }else{
    digital.write(LED_PIN,LOW);
  }
  delay(500);
}
