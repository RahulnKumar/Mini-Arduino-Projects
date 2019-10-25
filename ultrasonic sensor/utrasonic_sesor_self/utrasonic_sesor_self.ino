long dis;
int trig=8;
int echo=12;

void setup()
{
 pinMode(trig,OUTPUT);
 pinMode(echo,INPUT);
 Serial.begin(9600);
  

}

void loop() {
  digitalWrite(trig,LOW);
  delay(100);
  digitalWrite(trig,HIGH);
  delay(100);
  digitalWrite(trig,LOW);
  
  int time=pulseIn(echo,HIGH);
  time=time/2;
  dis=(time)/29.1;
  delay(2000);
  if(dis<10)
  {
   Serial.println(dis); 
  Serial.println("You are very close");
  }

  else
  {
    Serial.println(dis);
    Serial.println("Don't go very far");
    }
}
