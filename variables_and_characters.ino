int count=0;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  Serial.begin(9600);  
}

// the loop routine runs over and over again forever:
void loop() {
  count+=1;
  Serial.println("My name is Ayesha");
  Serial.println(count);
  delay(2000);
}
