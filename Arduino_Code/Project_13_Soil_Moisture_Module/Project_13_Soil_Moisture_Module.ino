

int adc_id = 0;
int buzzer_pin=12;
int soil_value=0;
void setup()
{
  Serial.begin(9600);
  pinMode(buzzer_pin,OUTPUT);
}

void loop()
{
    soil_value = analogRead(adc_id); // get adc value
    if(soil_value>900)
    {digitalWrite(buzzer_pin,HIGH);
      delay(500);
     digitalWrite(buzzer_pin,LOW);
      delay(500);
      Serial.println("I'm thirsty");
     }
     else
     {digitalWrite(buzzer_pin,LOW);
     }
    Serial.println(soil_value);
    
}
