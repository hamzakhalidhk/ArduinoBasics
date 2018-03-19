void setup() {
  // put your setup code here, to run once:
pinMode(11,INPUT);
pinMode(7,OUTPUT);
Serial.begin(9600);
}

char a;

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(11)==LOW)
{
  Serial.write("1");  
  digitalWrite(7,LOW);
}

a=Serial.read();
if(a=='1')
{
digitalWrite(7,HIGH);
delay(5000);
digitalWrite(7,LOW);
a='0';
}
}

