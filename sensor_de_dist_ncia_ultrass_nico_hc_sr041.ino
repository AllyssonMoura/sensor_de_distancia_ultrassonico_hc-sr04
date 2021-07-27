#include <Ultrasonic.h>

Ultrasonic sensor(7, 6);

void setup(){
  pinMode(5, OUTPUT);
  digitalWrite(5, LOW);
  Serial.begin(9600);
}

void loop(){
  delay(1000);
  float distancia = sensor.Ranging(CM);
  Serial.println("Distância: " + (String)distancia + " cm");
  
  if(distancia <= 50){
    digitalWrite(5, HIGH);
    delay(2000);
    digitalWrite(5, LOW);
  }
}