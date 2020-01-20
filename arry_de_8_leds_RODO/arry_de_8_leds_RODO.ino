/**********************************************************************************
**                                                                               **
**                              Array de 8 LEDs                                  **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int led1 = 1;          // donar nom al pin 5 de l’Arduino
const int led2 = 2;          // donar nom al pin 6 de l’Arduino
const int led3 = 3;          // donar nom al pin 7 de l’Arduino
const int led4 = 4;          // donar nom al pin 8 de l’Arduino
const int led5 = 5;          // donar nom al pin 9 de l’Arduino
const int led6 = 6;         // donar nom al pin 10 de l’Arduino
const int led7 = 7;         // donar nom al pin 11 de l’Arduino
const int led8 = 8;         // donar nom al pin 12 de l’Arduino
 int A = 400;       // es queden leds 500ms encesos
//********** Setup ****************************************************************
void setup()
{
  pinMode(led1, OUTPUT);     
  pinMode(led2, OUTPUT);     
  pinMode(led3, OUTPUT);     
  pinMode(led4, OUTPUT);     
  pinMode(led5, OUTPUT);    
  pinMode(led6, OUTPUT);     
  pinMode(led7, OUTPUT);     
  pinMode(led8, OUTPUT);     
}

//********** Loop *****************************************************************
void loop()
{
      
  digitalWrite(led1, HIGH);    
  digitalWrite(led2, HIGH);    
  digitalWrite(led3, LOW);    
  digitalWrite(led4, LOW);    
  digitalWrite(led5, LOW);    
  digitalWrite(led6, LOW);    
  digitalWrite(led7, LOW);    
  digitalWrite(led8, LOW);    
  
  delay(A);    

  digitalWrite(led1, LOW);    
  digitalWrite(led2, HIGH);    
  digitalWrite(led3, HIGH);    
  digitalWrite(led4, LOW);    
  digitalWrite(led5, LOW);    
  digitalWrite(led6, LOW);    
  digitalWrite(led7, LOW);    
  digitalWrite(led8, LOW);    
  
  delay(A);   

  digitalWrite(led1, LOW);    
  digitalWrite(led2, LOW);    
  digitalWrite(led3, HIGH);    
  digitalWrite(led4, HIGH);    
  digitalWrite(led5, LOW);    
  digitalWrite(led6, LOW);    
  digitalWrite(led7, LOW);    
  digitalWrite(led8, LOW);    
  
  delay(A);   

  digitalWrite(led1, LOW);    
  digitalWrite(led2, LOW);    
  digitalWrite(led3, LOW);    
  digitalWrite(led4, HIGH);    
  digitalWrite(led5, HIGH);    
  digitalWrite(led6, LOW);    
  digitalWrite(led7, LOW);    
  digitalWrite(led8, LOW);    
  
  delay(A);   

  digitalWrite(led1, LOW);    
  digitalWrite(led2, LOW);    
  digitalWrite(led3, LOW);    
  digitalWrite(led4, LOW);    
  digitalWrite(led5, HIGH);    
  digitalWrite(led6, HIGH);    
  digitalWrite(led7, LOW);    
  digitalWrite(led8, LOW);    
  
  delay(A);   

  digitalWrite(led1, LOW);    
  digitalWrite(led2, LOW);    
  digitalWrite(led3, LOW);    
  digitalWrite(led4, LOW);    
  digitalWrite(led5, LOW);    
  digitalWrite(led6, HIGH);    
  digitalWrite(led7, HIGH);    
  digitalWrite(led8, LOW);    
  
  delay(A);   

  digitalWrite(led1, LOW);    
  digitalWrite(led2, LOW);    
  digitalWrite(led3, LOW);    
  digitalWrite(led4, LOW);    
  digitalWrite(led5, LOW);    
  digitalWrite(led6, LOW);    
  digitalWrite(led7, HIGH);    
  digitalWrite(led8, HIGH);    
  
  delay(A);   

  digitalWrite(led1, HIGH);    
  digitalWrite(led2, LOW);    
  digitalWrite(led3, LOW);    
  digitalWrite(led4, LOW);    
  digitalWrite(led5, LOW);    
  digitalWrite(led6, LOW);    
  digitalWrite(led7, LOW);    
  digitalWrite(led8, HIGH);    
  
  delay(A);   
  
}


//********** Funcions *************************************************************
