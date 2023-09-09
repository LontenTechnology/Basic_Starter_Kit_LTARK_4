int redled =10; // initialize digital pin 10.
int yellowled =7; // initialize digital pin 7.
int greenled =4; // initialize digital pin 4.
void setup()
{
  pinMode(redled, OUTPUT);// set the pin with red LED as “output”
  pinMode(yellowled, OUTPUT); // set the pin with yellow LED as “output”
  pinMode(greenled, OUTPUT); // set the pin with blue LED as “output”
}
void loop()
{
  digitalWrite(greenled, HIGH);//// turn on green LED
  delay(2000);// wait 2 seconds
  digitalWrite(greenled, LOW); // turn off green LED
  for(int i=0;i<3;i++)// blinks for 3 times
  {
    delay(500);// wait 0.5 second
    digitalWrite(greenled, HIGH);// turn on green LED
    delay(500);// wait 0.5 second
    digitalWrite(greenled, LOW);// turn off green LED
  } 
  digitalWrite(yellowled, HIGH);//// turn on yellow LED
  delay(3000);// wait 3 seconds
  digitalWrite(yellowled, LOW); // turn off yellow LED
  digitalWrite(redled, HIGH);// turn on red LED
  delay(3000);// wait 3 second
  digitalWrite(redled, LOW);// turn off red LED
}
