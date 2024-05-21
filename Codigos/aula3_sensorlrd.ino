const int ldr = 0;
const int led = 11;
int valorLido = 0;

void setup()
{
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  valorLido = analogRead(ldr);
  Serial.println(valorLido);
  
  if(valorLido < 400){
    digitalWrite(led, HIGH);
  }
  else{
    digitalWrite (led, LOW);
  }
}