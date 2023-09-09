

int  sensorPin  =  7;     
int  buzzPin  =  12;  
void setup()
{
  pinMode(buzzPin,OUTPUT);
  pinMode(sensorPin,INPUT);

}
void loop(){
  if(0==digitalRead(sensorPin))
  {
    digitalWrite(buzzPin,HIGH);
  }
  else
 {
  digitalWrite(buzzPin,LOW);
 }
}
