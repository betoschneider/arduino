//Autor: Roberto Schneider
//26/11/2023
//Teste de proximidade
//Acendimento dos leds de acordo com a diminuição da distância

//definindo nome para as portas
#define pinLed0 5
#define pinLed1 6
#define pinLed2 7
#define trig 8
#define echo 9

//definindo variáveis
unsigned long tempo;
double distancia;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinLed0, OUTPUT);
  pinMode(pinLed1, OUTPUT);
  pinMode(pinLed2, OUTPUT);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);

  //iniciar o monitor
  //Serial.begin(9600);

  digitalWrite(trig, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  tempo = pulseIn(echo, HIGH);
  distancia = tempo / 58; //distancia em centimetros

  digitalWrite(pinLed0, distancia < 20);
  digitalWrite(pinLed1, distancia < 10);
  digitalWrite(pinLed2, distancia < 5);

  //Serial.println(distancia);
  //delay(300);
}
