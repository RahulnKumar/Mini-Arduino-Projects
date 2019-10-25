String state;
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);
  Serial.begin(9600); // Default communication rate of the Bluetooth module
}
void loop() {
   Serial.println("hellow");
  if(Serial.available() > 0){ // Checks whether data is comming from the serial port
 state = Serial.readStringUntil('\n'); }
 Serial.println(state);
 if (state.equals("off")) {
  digitalWrite(LED_BUILTIN, LOW); // Turn LED OFF
  Serial.println("LED: OFF"); // Send back, to the phone, the String "LED: ON"
  //state = 0;
 }
 else if (state.equals("on")) {
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.println("LED: ON");;
  //state = 0;
 } 
 delay(1000);
}
