// the pins are constant integers because their values shouldn't change.
const int PirPin = 5; // The PIR sensor is connected to the GPIO5 pin (digital pin 1).
const int buzzerPin = 16; // The Buzzer is conneted to the GPIO16 pin (Digital pin 0).
void setup()
{
  Serial.begin(115200); // starting serial communication via USB  with a  baud rate of 115200
  pinMode(PirPin, INPUT); // configure digital pin 1 to act as an input  
  pinMode(buzzerPin, OUTPUT); // configure digital pin 0 to act as output
}
void loop()
{
  int PirValue = digitalRead(PirPin); // reads value of the input from the PirPin
  Serial.println(PirValue);// prints data to serial monitor
  if (PirValue == 1)
  {
    digitalWrite(buzzerPin, HIGH); // write a high to the buzzer pin causing the buzzer to ring
  }
  else
  {
    digitalWrite(buzzerPin, LOW); // write a low to the buzzer pin and the buzzer doesn't ring
  }
  delay(10); // pauses program for 10 milliseconds
}
