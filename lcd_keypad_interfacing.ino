#include<LiquidCrystal.h>
//LiquidCrystal lcd(RS,EN,D4,D5,D6,D7);
LiquidCrystal lcd(0,1,5,4,3,2);
int A=6;
int B=7;
int C=8;
int D=9;
int C1=10;
int C2=11;
int C3=12;
int col1;
int col2;
int col3;
void setup()
{
lcd.begin(16,2);
pinMode(A,OUTPUT);
pinMode(B,OUTPUT);
pinMode(C,OUTPUT);
pinMode(D,OUTPUT);
pinMode(C1,INPUT);
pinMode(C2,INPUT);
pinMode(C3,INPUT);
digitalWrite(C1,HIGH);
digitalWrite(C2,HIGH);
digitalWrite(C3,HIGH);
}
void loop()
{
  lcd.setCursor(0,1);
  digitalWrite(A,LOW);
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
  col1=digitalRead(C1);
  col2=digitalRead(C2);
  col3=digitalRead(C3);
  
  if(col1==LOW)
  {
    lcd.print("1");
   delay(200);
 }
  else
  {
   if(col2==LOW)
   {
     lcd.print("2");
    delay(200);
  }
   else
   {
   if(col3==LOW)
   {
     lcd.print("3");
     delay(200);
   }
   }}
   
   digitalWrite(A,HIGH);
   digitalWrite(B,LOW);
   digitalWrite(C,HIGH);
   digitalWrite(D,HIGH);
   
  col1=digitalRead(C1);
  col2=digitalRead(C2);
  col3=digitalRead(C3);
  
  if(col1==LOW)
  {lcd.print("4");
    delay(200);}
  else
  {
   if(col2==LOW)
   {lcd.print("5");
    delay(200);}
   else
   {
   if(col3==LOW)
   {lcd.print("6");
      delay(200);}
   }}
   
   
   digitalWrite(A,HIGH);
   digitalWrite(B,HIGH);
   digitalWrite(C,LOW);
   digitalWrite(D,HIGH);
   
  col1=digitalRead(C1);
  col2=digitalRead(C2);
  col3=digitalRead(C3);
  
  if(col1==LOW)
  {lcd.print("7");
     delay(200);}
  else
  {
   if(col2==LOW)
   {lcd.print("8");
       delay(200);}
   else
   {
   if(col3==LOW)
   {lcd.print("9");
        delay(200);}
   }}
   
   
   digitalWrite(A,HIGH);
   digitalWrite(B,HIGH);
   digitalWrite(C,HIGH);
   digitalWrite(D,LOW);
   
  col1=digitalRead(C1);
  col2=digitalRead(C2);
  col3=digitalRead(C3);
  
  if(col1==LOW)
  {lcd.print("*");
     delay(200);}
  else
  {
   if(col2==LOW)
   {lcd.print("0");
       delay(200);}
   else
   {
   if(col3==LOW)
   {lcd.print("#");
        delay(200);}
   }}
  
   }
