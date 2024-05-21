#define led 1
  
void setup()//o que cada componente vai ser
{
  pinMode(led, OUTPUT); //led é um pino de saída
}

void loop() //a programação em si
{
  digitalWrite(led, HIGH); //led acenda
  delay(1000); // delay é o tempo: 1s
  digitalWrite(led, LOW); //led apague
  delay(1000); // delay é o tempo: 1s
}