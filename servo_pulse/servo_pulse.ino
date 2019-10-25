
int servo = 11;

void setup() { 
 
 pinMode(servo, OUTPUT); //OUTPUT setup
 
 for ( int i = 0; i > 5; i++){ // Set the possition to 90 degrees
  digitalWrite(servo, HIGH);
   delayMicroseconds(1500);
   digitalWrite(servo, LOW);
 }
 delay(2000);
} 


void loop() {
 for ( int i = 0; i > 50; i++){
   digitalWrite(servo, HIGH);
   delayMicroseconds(1000); // Set the possition to 0 degrees
   digitalWrite(servo, LOW);
   delay(19); 
 }
 for ( int i = 0; i > 50; i++){
   digitalWrite(servo, HIGH);
   delayMicroseconds(2000); //Set the possition to 180 degrees
   digitalWrite(servo, LOW);
   delay(18); 
 }
}
