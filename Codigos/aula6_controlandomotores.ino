#include <Servo.h> 

int posicao = 0;
int i = 0;

Servo servomotor;
#define led 4

void setup()
{
  servomotor.attach(3, 50, 2500);
  pinMode(led, OUTPUT);
}

void loop()
{
  while(1 > 0){
    
    for(posicao = 0; posicao < 180; posicao = posicao + 1){
      servomotor.write(posicao);
      digitalWrite(led, HIGH);
      delay(15);   
    }
        
    for(posicao = 180; posicao > 0; posicao = posicao - 1){
      servomotor.write(posicao);
      digitalWrite(led, LOW);
      delay(15);   
    }
  }
}