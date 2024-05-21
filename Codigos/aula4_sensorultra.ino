#define trig_pin 4
#define echo_pin 5
#define piezo_pin 6
#define led_pin 7

#define velocidade 0.0343

float distancia; 

void setup(){
	pinMode(trig_pin, OUTPUT);
	pinMode(echo_pin, INPUT);
	pinMode(led_pin, OUTPUT);
	pinMode(piezo_pin, OUTPUT); 
}


void loop(){

  distancia = calcularDistancia();
  
  if(distancia <= 10){
    digitalWrite(piezo_pin, HIGH);
    digitalWrite(led_pin, HIGH);
  }
  
  else {
    digitalWrite(piezo_pin, LOW);
    digitalWrite(led_pin, LOW);
  }  
}
  
  float calcularDistancia(){
  digitalWrite(trig_pin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig_pin, LOW);

 
  float tempo = pulseIn(echo_pin, HIGH);
  float distance = (tempo*velocidade)/2; 
  return distance;
}
