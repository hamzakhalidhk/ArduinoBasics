#include <Stepper.h>

// change this to the number of steps on your motor
#define STEPS 200

// create an instance of the stepper class, specifying
// the number of steps of the motor and the pins it's
// attached to
Stepper stepper(STEPS,8,9,10,11);

void setup()
{
  // Initialize random number generator
  randomSeed(analogRead(0));
}

void loop()
{
  // Pick a random direction and distance to move
  int rand = random(-200, 200);
  
  // Pick a random speed
  int spd = random(25, 100);
  
  // Go
  stepper.setSpeed(spd);
  stepper.step(rand);
  
  delay(1000); 
}
