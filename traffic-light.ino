/*
  Code by: 
  M.Hashir

  This is a code for traffic light
  Hardware:
  - Arduino
  - Few wires
  - Traffic light module (Can be bought from www.munphurid.com)

  Connections:
  Connect pin 8 of Arduino to red light of Traffic light module
  Connect pin 9 of Arduino to yellow light of Traffic light module
  Connect pin 10 of Arduino to green light of Traffic light module
  Connect GND of Arduino to GND of Traffic light module
*/


int redlight = 8;    //Red light is connected to pin 8 of Arduino
int yellowlight = 9;  //Yellow light is connected to pin 9 of Arduino
int greenlight = 10;  //Green light is connected to pin 10 of Arduino

void setup() {
  pinMode(redlight, OUTPUT);   //Do not edit this line
  pinMode(yellowlight, OUTPUT);   //Do not edit this line
  pinMode(greenlight, OUTPUT);   //Do not edit this line
}

void loop() {
  digitalWrite(redlight, HIGH);     //turn on Red light
  digitalWrite(yellowlight, LOW);   //turn off yellow light
  digitalWrite(greenlight, LOW);     //turn off green light
  delay(2000);                        //Now wait and do nothing... you can change the number in brackets to change the duration of delay

  digitalWrite(redlight, LOW);     //turn off Red light
  digitalWrite(yellowlight, HIGH);   //turn on yellow light
  digitalWrite(greenlight, LOW);     //turn off green light
  delay(2000);                        //Now wait and do nothing... you can change the number in brackets to change the duration of delay

  digitalWrite(redlight, LOW);     //turn off Red light
  digitalWrite(yellowlight, LOW);   //turn off yellow light
  digitalWrite(greenlight, HIGH);     //turn on green light
  delay(2000);                        //Now wait and do nothing... you can change the number in brackets to change the duration of delay

  //now go to the start of void loop()
}
