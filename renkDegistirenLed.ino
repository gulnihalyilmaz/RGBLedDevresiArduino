byte kirmiziPin=11 ;
byte maviPin=10;
byte yesilPin=9;

void setup()
{
  pinMode(kirmiziPin,OUTPUT);
  pinMode(maviPin,OUTPUT);
  pinMode(yesilPin, OUTPUT);
  
}

void loop()
{
  digitalWrite(kirmiziPin,HIGH);
  digitalWrite(maviPin, LOW);
  digitalWrite(yesilPin,LOW);
  delay(500);
  
  digitalWrite(maviPin,HIGH);
  digitalWrite(kirmiziPin,LOW);
  digitalWrite(yesilPin,LOW);
  delay(500);
  
  digitalWrite(yesilPin,HIGH);  
  digitalWrite(kirmiziPin,LOW);
  digitalWrite(maviPin,LOW);
  delay(500);
}
