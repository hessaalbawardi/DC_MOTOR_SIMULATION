void setup(){
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
    pinMode(4,OUTPUT);
    pinMode(3,OUTPUT);
}

void loop (){
  
  // The motors will move forward, turn right and then stop for 5 seconds
  
  
  // Forward direction
  digitalWrite(6,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(3,LOW);
  delay(1000); //1000 ms =1 second 
  
  
  // Turn Right
  digitalWrite(6,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
  delay(500); //500 ms =1/2 second 
  
  // Backward direction
  digitalWrite(6,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(3,HIGH);
  delay(1000); //1000 ms =1 second 
  
  
  // Turn left
  digitalWrite(6,LOW);
  digitalWrite(5,LOW);
  digitalWrite(4,LOW);
  digitalWrite(3,HIGH);
  delay(500); //500 ms =1/2 second 
  
  
   // STOP
  digitalWrite(6,LOW);
  digitalWrite(5,LOW);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
  delay(5000); //5000 ms =5 second 
  
}


