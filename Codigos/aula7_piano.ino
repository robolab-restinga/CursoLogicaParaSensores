#define botao1 A0
#define botao2 A1
#define botao3 A2
#define botao4 A3

#define piezo 3

void setup(){
  pinMode(botao1, INPUT);
  pinMode(botao2, INPUT);
  pinMode(botao3, INPUT);
  pinMode(botao4, INPUT);
  
  pinMode(piezo, OUTPUT);
}

void loop(){
  
  int b1 = digitalRead(botao1);
  int b2 = digitalRead(botao2);
  int b3 = digitalRead(botao3);
  int b4 = digitalRead(botao4);  

  if(b1 == 1){
    tone(piezo,300,100);
  }
  
    if(b2 == 1){
    tone(piezo,400,100);
  }
  
    if(b3 == 1){
    tone(piezo,500,100);
  }
  
    if(b4 == 1){
    tone(piezo,600,100);
  }
  
  delay(10);
  
}
