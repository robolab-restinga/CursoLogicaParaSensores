#define vermelho 1
#define amarelo 2
#define verde 3


void setup()

{
  pinMode(vermelho, OUTPUT); 
  pinMode(amarelo, OUTPUT); 
  pinMode(verde, OUTPUT); 
}



void loop()
{
  digitalWrite(vermelho, HIGH); 
  delay(1000); 
  digitalWrite(vermelho, LOW);

  digitalWrite(amarelo, HIGH); 
  delay(1000); 
  digitalWrite(amarelo, LOW); 

  digitalWrite(verde, HIGH); 
  delay(1000); 
  digitalWrite(verde, LOW); 
}