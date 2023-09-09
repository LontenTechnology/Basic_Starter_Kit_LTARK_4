

int  sensorPin  =  7;     
int  ledPin  =  12;   // select the pin for  the LED
void setup()
{
pinMode(ledPin,OUTPUT);
pinMode(sensorPin,INPUT);

}
void loop(){
if(1==digitalRead(sensorPin))
{digitalWrite(ledPin,HIGH);
 delay(3000);
 digitalWrite(ledPin,LOW);
}else
 {digitalWrite(ledPin,LOW);
  }

}
