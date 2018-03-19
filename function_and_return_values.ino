int A=0;
void setup()
{
  Serial.begin(9600);
  Serial.println("Hi Ayesha");
  Serial.println("Let's study Arduino UNO");
  Addition(250,500);
  Serial.println(ValChk(A));
}
void loop() {}
void Addition(int ValOne, int ValTwo)
{
  A=ValOne+ValTwo;
  Serial.print(ValOne);
  Serial.print("+");
  Serial.print(ValTwo);
  Serial.print("=");
  Serial.println(A);
}
int ValChk(int Answer)
{
  if (Answer<1000)
  return 1;
  else return 0;
}
  
  
