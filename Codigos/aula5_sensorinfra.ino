// C++ code


#define infra_sensor 5
#define led_pin 3


void setup()
{
  Serial.begin(9600);
  pinMode(led_pin, OUTPUT);
  pinMode(infra_sensor, INPUT);
  
}

void loop()
{
  
  if(digitalRead(infra_sensor) == LOW){
    digitalWrite (led_pin, HIGH);
  }
     else{
       digitalWrite(led_pin, LOW);
     }
}