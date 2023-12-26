//Autor: Roberto Schneider
//25/12/2023
//Teste de Servo motor
//https://blog.fazedores.com/como-usar-servo-motor-com-arduino/

#include <Servo.h>

#define SERVO 6 // Porta Digital 6 PWM

Servo s; // Variável Servo
int pos; // Posição Servo

void setup ()
{
  s.attach(SERVO);
  Serial.begin(9600);
  s.write(0); // Inicia motor posição zero
}

void loop()
{
  for(pos = 0; pos < 360; pos++)
  {
    s.write(pos);
    Serial.println(pos);
    delay(15);
  }
  delay(1000);
  for(pos = 360; pos >= 0; pos--)
  {
    s.write(pos);
    Serial.println(pos);
    delay(15);
  }
}
