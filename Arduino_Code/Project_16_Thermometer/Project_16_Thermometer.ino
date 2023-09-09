int tempPin = A1;
void setup()
{
  Serial.begin(9600);
}
void loop()
{
  int tempReading = analogRead(tempPin);
  // This is OK
  double tempK = log(10000.0 * ((1024.0 / tempReading - 1)));
  tempK = 1 / (0.001129148 + (0.000234125 + (0.0000000876741 * tempK * tempK )) * tempK );       //  Temp Kelvin
  float tempC = tempK - 273.15;            // Convert Kelvin to Celcius
  float tempF = (tempC * 9.0)/ 5.0 + 32.0; // Convert Celcius to Fahrenheit
  Serial.print("Temp:");
  Serial.print(tempC);
  Serial.println("℃");
  delay(500);
}
