#include <Servo.h>
 
Servo servo1;
 
int pos = 0;    
// posició del servo

void setup() {
  
   servo1.attach(2);  
   // vincular el servo al pin 2
}
 
void loop() {
  
   //variar la posició de 0 a 180
   for (pos = 0; pos <= 180; pos += 1) 
   {
      servo1.write(pos);              
      delay(15); 
      //Espera 15 milisegons                      
   }
 
   //variar la posició de 0 a 180
   for (pos = 180; pos >= 0; pos -= 1) 
   {
      servo1.write(pos);              
      delay(15); 
      //Espera 15 milisegons                      
   }
}
