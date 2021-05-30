// Include Libraries
#include "Arduino.h"
#include "Servo.h"

#define SERVO360MICRO5_5_PIN_SIG  6

Servo servo360Micro5_5;

void setup() {
 
    Serial.begin(9600);
     while (!Serial) ;
    Serial.println("start");
}

void loop() {
  
    servo360Micro5_5.attach(SERVO360MICRO5_5_PIN_SIG);  
    servo360Micro5_5.write(180);  
    delay(2000);                         
    servo360Micro5_5.write(0);    
    delay(2000);               
    servo360Micro5_5.write(90);   
    delay(2000);      
    servo360Micro5_5.detach();  
    delay(1000);
}
