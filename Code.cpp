int ledPin = 6; //output Pin that we will modulate
int brightness = 0; //This will be the variable we will add and subtract 
int fadeAmount = 5;//This will be the amount we increase decrease

void setup() {
  pinMode(ledPin, OUTPUT); //Pin 6 setup as output
}

void loop() {
  analogWrite(ledPin, brightness); //sends PWM signal to LED

  brightness = brightness + fadeAmount; //Brightness goes up or duty cycle increases or decreases

  if (brightness <= 0 || brightness >= 255) {//change of length based off of either limit
    fadeAmount = -fadeAmount;
  }

  delay(30);//Deylay 30 ms before loop
}
