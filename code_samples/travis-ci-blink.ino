SYSTEM_MODE(AUTOMATIC);

int red = D0;
int green = D1;

void setup()
{

   pinMode(red, OUTPUT);
   pinMode(green, OUTPUT);
   Particle.function("led",ledToggle);

   digitalWrite(red, LOW);
   digitalWrite(green, LOW);

}


int ledToggle(String command) {
  if (command=="red") {
      digitalWrite(red,HIGH);
      digitalWrite(green,LOW);
      return 1;
  }
  else if (command=="green") {
      digitalWrite(red,LOW);
      digitalWrite(green,HIGH);
      return 0;
  }
  else {
      return -1;
  }
}

