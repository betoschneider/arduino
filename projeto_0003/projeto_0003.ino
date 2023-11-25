//Autor: Roberto Schneider
//25/11/2023
//sensor de intensidade de som

//definindo nome para as portas
#define pinLed0 5
#define pinLed1 6
#define pinLed2 7

void setup() {
  // put your setup code here, to run once:
  pinMode(pinLed0, OUTPUT);
  pinMode(pinLed1, OUTPUT);
  pinMode(pinLed2, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  int valor = analogRead(A0);   //intensidade de som registrada no microfone
  
  digitalWrite(pinLed0, valor > 90); 
  digitalWrite(pinLed1, valor > 1100); 
  digitalWrite(pinLed2, valor > 1200); 
}
