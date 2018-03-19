#include<LiquidCrystal.h>

int RS=12,E=11,D4=10,D5=9,D6=8,D7=7;

LiquidCrystal lcd(RS,E,D4,D5,D6,D7);


void setup() {

  lcd.begin(16,2);    //begins a 16x2 alphanumeric lcd
}

void loop() {

  lcd.setCursor(0,1);  //Brings cursor to location line=1,character=0;

lcd.print("HI");    //prints HI on lcd

lcd.clear();    //clears lcd

//Note: the functions used in void loop are optional. use them wherever necessary

}
