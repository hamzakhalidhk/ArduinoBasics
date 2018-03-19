int sensorPin = 0;
#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,7,6,5,4);
void setup()
{
lcd.begin(16,2); //Start the serial connection with the computer
//to view the result open the serial monitor
pinMode(2,OUTPUT);
float reading = analogRead(sensorPin);
float temp=(4.4*reading*100)/1024;
lcd.setCursor(0,0);
lcd.print("Temperature is");
lcd.setCursor(0,1);
lcd.print(temp);
lcd.print("deg C");
if(temp>27.01)
{
  digitalWrite(2,HIGH);
}
}
void loop() // run over and over again
{
//getting the voltage reading from the temperature sensor
//int reading = analogRead(sensorPin);
// converting that reading to voltage, for 3.3v arduino use 3.3
//float voltage = reading * 5.0;
//voltage /= 1024.0;
// print out the voltage
//lcd.print(voltage); 
// now print out the temperature
//float temperatureC = (voltage - 0.5) * 100 ; //converting from 10 mv per degree wit 500 mV offset
//to degrees ((voltage - 500mV) times 100)
//delay(1000);
}
