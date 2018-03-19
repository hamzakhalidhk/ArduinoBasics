//**************************************************************//
//  Name    : shiftOutCode, Hello World                                
//  Author  : Carlyn Maw,Tom Igoe, David A. Mellis 
//  Date    : 25 Oct, 2006    
//  Modified: 23 Mar 2010                                 
//  Version : 2.0                                             
//  Notes   : Code for using a 74HC595 Shift Register           //
//          : to count from 0 to 255                           
//****************************************************************

//Pin connected to ST_CP of 74HC595
int latchPin = 10;
//Pin connected to SH_CP of 74HC595
int clockPin = 11;
////Pin connected to DS of 74HC595
int dataPin = 12;



void setup() {
  //set pins to output so you can control the shift register
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
}

void loop() {

  // take the latchPin low so 
    // the LEDs don't change while you're sending in bits:
    digitalWrite(latchPin, LOW);

    // shift out the bits:
    shiftOut(dataPin, clockPin, MSBFIRST, 0b01010101);  

    // shift out the bits:
    shiftOut(dataPin, clockPin, MSBFIRST, 0b01111111);  

    // shift out the bits:
    shiftOut(dataPin, clockPin, MSBFIRST, 0b11110000);  

    // shift out the bits:
    shiftOut(dataPin, clockPin, MSBFIRST, 0b01111100);  

    // shift out the bits:
    shiftOut(dataPin, clockPin, MSBFIRST, 0b11001100);  



    //take the latch pin high so the LEDs will light up:
    digitalWrite(latchPin, HIGH);
    // pause before next value:
    delay(500);
while(1);  
}

