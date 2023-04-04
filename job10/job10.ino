int pinLed=9;
int i;

void setup(){
    pinMode(pinLed,OUTPUT);
}

void loop(){
  for(i=0;i<=255;i+=3){
    analogWrite(pinLed,i);
    delay(30);
  }
  
  for(i=255;i>=0;i-=3){
    analogWrite(pinLed,i);
    delay(30);
  }
  
}