void setup(){
pinMode (13, OUTPUT);
pinMode (12, OUTPUT);
pinMode (11, OUTPUT);
}

void loop(){
changeLights();
delay(15000);
}

void changeLights(){
// green off, yellow for 3 seconds
digitalWrite(11,HIGH);
digitalWrite(12,LOW);
delay(3000);

// turn off yellow, then turn red on for 5 seconds
digitalWrite(12,LOW);
digitalWrite(13,HIGH);
delay(5000);

// red and yellow on for 2 seconds (red is already on though)
digitalWrite(12,HIGH);
delay(2000);

// turn off red and yellow, then turn on green
digitalWrite(12,LOW);
digitalWrite(13,LOW);
digitalWrite(11,HIGH);
}
