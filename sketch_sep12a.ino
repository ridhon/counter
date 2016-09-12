void setup()
{
  pinMode(A0, INPUT);
  digitalWrite(A0, HIGH);
  pinMode(A1, INPUT);
  digitalWrite(A1, HIGH);
  pinMode(A2, INPUT);
  digitalWrite(A2, HIGH);
}

void loop()
{
  if(digitalRead(A0)==LOW)
  {
    PORTB +=1;
    delay(500);
  }
  
  if(digitalRead(A1)==LOW)
  {
    PORTB -=1;
    delay(500);
  }
  
  if(digitalRead(A2)==LOW)
  {
    PORTB=0;
  }
}
