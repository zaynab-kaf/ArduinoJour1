void setup()
{
  for(int i=2;i<10;i++)
  {
	 pinMode(i, OUTPUT);
  }
}

void loop() 
{
   for(int i=2;i<10;i++)
    
   {
  digitalWrite(i, HIGH);
  delay(200);
  digitalWrite(i, LOW);
   }
    
}