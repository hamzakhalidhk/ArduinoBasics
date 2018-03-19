void setup()
{//4 LEDs are attached on pins 2,3,4 and 5
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
}
void loop()
{
  //for loop is used which will run from a=2 to a=5
for ( int a = 2; a < 6 ; a++ )
{/*Actually variable 'a' is used for pin no. here. When the loop runs for
  the first time the value of 'a' is 2 i.e the below statements in for loop become
digitalWrite(2, HIGH);
delay(100);
digitalWrite(2, LOW);
delay(100);
which means LED attached to pin no. 2 turns on and then off, similarly when for loop runs again the value of a is
incremented due to a++ and now the value of 'a' becomes 3 and led attached to pin 3 turns on and then off. The loop runs till a<6
i.e a=5.
  */
digitalWrite(a, HIGH);
delay(100);
digitalWrite(a, LOW);
delay(100);
}
}
