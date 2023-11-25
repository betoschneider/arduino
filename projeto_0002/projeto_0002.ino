//Autor: Roberto Schneider
//25/11/2023
//Acendimento de leds em sequência

//definindo nome para as portas
#define pinLed0 7
#define pinLed1 6
#define pinLed2 5

void setup() {
  // put your setup code here, to run once:
  pinMode(pinLed0, OUTPUT);
  pinMode(pinLed1, OUTPUT);
  pinMode(pinLed2, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  int valorIntervalo = 100;   //variavel com o valor de tempo para aguardar
  
  digitalWrite(pinLed0, HIGH); //acende primeiro led
  delay(valorIntervalo);       //aguarda (tempo em milissegundos)
  digitalWrite(pinLed1, HIGH); //acende segundo led
  delay(valorIntervalo);
  digitalWrite(pinLed2, HIGH); //acente terceiro led
  delay(valorIntervalo);
  digitalWrite(pinLed0, LOW);  //apaga primeiro led
  digitalWrite(pinLed1, LOW);
  digitalWrite(pinLed2, LOW);
  delay(valorIntervalo);
}
