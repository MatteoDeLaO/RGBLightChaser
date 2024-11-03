void setup() {
  // put your setup code here, to run once:
pinMode (9, OUTPUT);  //pins 9,10,11 are now outputs
pinMode (10, OUTPUT);
pinMode (11, OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(9,1); //pin 9 is on while 10,11 is off
digitalWrite(10,0);  
digitalWrite(11,0);
delay(100); //wait 100 milliseconds 
digitalWrite(9,0); //pin 10 is on while 9,11 is off
digitalWrite(10,1);  
digitalWrite(11,0);
delay(100); //wait 100 milliseconds 
digitalWrite(9,0); //pin 11 is on while 9,10 are off
digitalWrite(10,0);  
digitalWrite(11,1);
delay(100); //wait 100 milliseconds 
}
