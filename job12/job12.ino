int pot = A0;
int led = 9;
int led2 = 10;

void setup() {
  Serial.begin(9600);
  pinMode(pot, INPUT);
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);

}

void loop() {
  int valeurpot = analogRead(pot);
  Serial.println(valeurpot);
  int valeurled = map(valeurpot, 0, 1023, 0, 255);
  analogWrite(led, valeurled);
  int valeurled2 = map(valeurpot, 1023,0 ,255 ,0);
  analogWrite(led2, valeurled2);
}