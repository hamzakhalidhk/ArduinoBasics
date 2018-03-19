//this code can be used with potentiometer, ldr, lm35 and for acquiring any analog voltage
int i=0;

void setup() {

  pinMode(A0,INPUT);
  Serial.begin(9600);
  
}

void loop() {

  i=analogRead(A0);
  Serial.println(i);
  delay(500);
}
