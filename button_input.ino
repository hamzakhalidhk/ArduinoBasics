int i=0;
int button=12 , led=13;

void setup() {

pinMode(button,INPUT);
pinMode(led,OUTPUT);

}

void loop() {

  i=digitalRead(button);

if(i==1)
{
digitalWrite(led,HIGH);
}

else if(i==0)
{
digitalWrite(led,LOW);
}


}
