int buzzer=8;// select digital IO pin for the buzzer
void setup() 
{ 
pinMode(buzzer,OUTPUT);// set digital IO pin pattern, OUTPUT to be output 
} 
void loop() 
{ unsigned char i,j;//define variable
while(1) 
{ for(i=0;i<80;i++)// output a frequency sound
{ digitalWrite(buzzer,HIGH);// sound
delay(1);//delay 1ms 
digitalWrite(buzzer,LOW);//not sound
delay(1);//delay 1ms 
} 
for(i=0;i<100;i++)// output a frequency sound
{ digitalWrite(buzzer,HIGH);// sound
delay(1);//delay 1ms
digitalWrite(buzzer,LOW);//not sound
delay(2);//delay 2ms
}
} 
} 
