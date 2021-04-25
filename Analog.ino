int av=0;
void setup()
{
  Serial.begin(9600);
  pinMode(4, OUTPUT);
}
void loop()
{
  av=analogRead(A0);
  Serial.println(av);
  delay(1000);
  if(av<400)
  {
    digitalWrite(4, HIGH);
  }
  else
  {
    digitalWrite(4, LOW);
  }
}
