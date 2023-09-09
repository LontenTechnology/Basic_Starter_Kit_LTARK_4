#define led 8
#define vaule 5
void setup() 
{ 
  pinMode(led,OUTPUT);// set digital pin 8 as “output” 
} 
void loop() 
{ 
    int i;// define variable i 
    i=analogRead(vaule);// read the voltage value of analog pin 5 
    if(i<512)// if larger that 512（2.5V） 
    { 
      digitalWrite(8,HIGH);// turn on LED 
    } 
    else
    { 
      digitalWrite(8,LOW);// turn off LED 
    } 
} 

