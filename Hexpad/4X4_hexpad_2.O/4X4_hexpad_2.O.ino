////////////////  4X4 hexpad code for displaying key pressed through serial monitor    //////////////////////
// Defining row pins and columns of keypad connected to Arduino pins
int row[]={6,7,8,9};
int col[]={2,3,4,5};
// Two counter variables to count inside for loop
int i,j; 
// Variable to hold value of scanned columns
int col_scan;

void setup()
{
Serial.begin(9600);
for(i=0;i<=3;i++)
{
pinMode(row[i],OUTPUT);
pinMode(col[i],INPUT);
digitalWrite(col[i],HIGH);
} }

void loop()
{ 
for(i=0; i<=3; i++)
{
digitalWrite(row[0],HIGH);              //Setting all the row at high state
digitalWrite(row[1],HIGH);              //Setting all the row at high state
digitalWrite(row[2],HIGH);              //Setting all the row at high state
digitalWrite(row[3],HIGH);             // Setting all the row at high state
digitalWrite(row[i],LOW);              // Now the row of pressed key is in low state
for(j=0; j<=3; j++)
{
col_scan=digitalRead(col[j]);           //Now the column of the pressed key must be low
if(col_scan==LOW)                       //So, by this loop getting the column no.
{
keypress(i,j);
delay(300);
}}
}}
void keypress(int i, int j)
{
if(i==0&&j==0)
Serial.println("1");
if(i==0&&j==1)
Serial.println("2");
if(i==0&&j==2)
Serial.println("3");
if(i==0&&j==3)
Serial.println("A");
if(i==1&&j==0)
Serial.println("4");
if(i==1&&j==1)
Serial.println("5");
if(i==1&&j==2)
Serial.println("6");
if(i==1&&j==3)
Serial.println("B");
if(i==2&&j==0)
Serial.println("7");
if(i==2&&j==1)
Serial.println("8");
if(i==2&&j==2)
Serial.println("9");
if(i==2&&j==3)
Serial.println("C");
if(i==3&&j==0)
Serial.println("*");
if(i==3&&j==1)
Serial.println("0");
if(i==3&&j==2)
Serial.println("#");
if(i==3&&j==3)
Serial.println("D");
}
