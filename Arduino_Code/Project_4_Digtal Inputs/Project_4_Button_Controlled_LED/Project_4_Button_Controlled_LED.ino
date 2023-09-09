int Redled=11;// initialize Redled 11
int inpin=7;// initialize pin 7
int val;// define val
void setup()
{
    pinMode(Redled,OUTPUT);// set LED pin as “output”
    pinMode(inpin,INPUT);// set button pin as “input”
}
void loop()
{
    val=digitalRead(inpin);// read the level value of pin 7 and assign if to val
    if(val==LOW)// check if the button is pressed, if yes, turn on the LED
    { 
      digitalWrite(Redled,HIGH);
    }
    else
    { 
      digitalWrite(Redled,LOW);
    }
}
