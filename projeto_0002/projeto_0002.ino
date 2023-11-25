
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
  digitalWrite(pinLed0, HIGH);
  delay(200);
  digitalWrite(pinLed1, HIGH);
  delay(200);
  digitalWrite(pinLed2, HIGH);
  delay(200);
  digitalWrite(pinLed0, LOW);
  digitalWrite(pinLed1, LOW);
  digitalWrite(pinLed2, LOW);
  delay(200);

}
