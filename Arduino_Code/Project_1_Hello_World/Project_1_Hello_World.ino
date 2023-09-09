int value;//define variable value
int ledpin=13;// define digital interface 13
void setup()
{
  Serial.begin(9600);// set the baud rate at 9600 to match the software set up. When connected to a specific device, (e.g. bluetooth), the baud rate needs to be the same with it.
  pinMode(ledpin,OUTPUT);// initialize digital pin 13 as output. When using I/O ports on an Arduino, this kind of set up is always needed.
  digitalWrite(ledpin,LOW);// initialize set the LED on digital pin 13 off.
}
void loop()
{
  value=Serial.read();// read the instruction or character from PC to Arduino, and assign them to Val.
  if(value=='L')// determine if the instruction or character received is “L”.
  {  // if it’s “L”,    
    digitalWrite(ledpin,HIGH);// set the LED on digital pin 13 on. 
    delay(500);
    digitalWrite(ledpin,LOW);// set the LED on digital pin 13 off.    delay(500);
    Serial.println("Hello World!");// display“Hello World！”string.
  }
  else{// determine the instruction or character not received.
    digitalWrite(ledpin,LOW);// set the LED on digital pin 13 off.
  }
}
