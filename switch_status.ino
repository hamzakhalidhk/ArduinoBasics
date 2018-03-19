/*
  DigitalReadSerial
 Reads a digital input on pin 2, prints the result to the serial monitor 
 
 */

// digital pin 2 has a pushbutton attached to it. Give it a name:
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 1);//pins on which LCD is connected
int pushButton = 2; //button is connected to pin 2 of arduino
void setup() 
{
lcd.begin(16, 2);// column by row i.e 16 columns and 2 rows
pinMode(pushButton, INPUT);
}
void loop() 
{
int buttonState = digitalRead(pushButton);//reading button and saving it in a variable buttonState
lcd.setCursor(0,0); //now printing the button state on LCD i.e if button is pressed 1 is displayed on LCD otherwise 0
lcd.print(buttonState);
lcd.setCursor(0,1);
lcd.print(buttonState);
delay(1);
}


