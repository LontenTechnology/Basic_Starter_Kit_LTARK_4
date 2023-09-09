int potpin=0;// initialize analog pin A0, connected with photovaristor
int ledpin=11;// initialize digital pin 11, output regulating the brightness of LED
int val=0;// initialize variable va
void setup()
{
  pinMode(ledpin,OUTPUT);// set digital pin 11 as “output”
  Serial.begin(9600);// set baud rate at “9600”
}
void loop()
{
  val=map ( analogRead(potpin) , 0 , 1023 , 0 , 255);// read the analog value of the sensor and assign it to val
  Serial.println(val);// display the value of val
  analogWrite(ledpin,val);// turn on the LED and set up brightness（maximum output value 255）
  delay(10);// wait for 0.01 
}
