//setup commands for Xbee
//+++
//ATDH13A200
//ATDL40B7A19B
//ATWR
//ATCN

const int flexpin1 = A0;
const int flexpin2 = A1;
const int flexpin3 = A2;
const int flexpin4 = A3;
const int flexpin5 = A4;

const int p1= 10;//change this value
const int p2= 20;//change this value
const int p3= 30;//change this value
const int p4= 40;//change this value
const int p5= 50;//change this value

const int buttonPin = 2;     // pin init for mode button
int led = 3;                 // pin init for mode indicator led
int ledPin = 13;             // pin init for ACK led 
const int pop=7;             // supply rail for button
int buttonState = 0;         // variable for reading the pushbutton status

void setup() 
{
  pinMode( led  , OUTPUT);   
  pinMode(ledPin, OUTPUT);  
  pinMode(buttonPin, INPUT);

}

void loop() 
{
  int fp1,fp2,fp3,fp4,fp5; // Input value from the analog pin.
  int i1,i2,i3,i4,i5;
  digitalWrite(led, HIGH);
  fp1 = analogRead(flexpin1);
  fp2 = analogRead(flexpin2);
  fp3 = analogRead(flexpin3);  
  fp4 = analogRead(flexpin4);  
  fp5 = analogRead(flexpin5);  
  //Serial.print("sensor 1: ");
  //Serial.println(fp1);
  //Serial.print("sensor 2: ");
  //Serial.println(fp2);
  //Serial.print("sensor 3: ");
  //Serial.println(fp3);
  //Serial.print("sensor 4: ");
  //Serial.println(fp4);
  //Serial.print("sensor 5: ");
  //Serial.println(fp5);
  if(abs(fp1)>=p1)
      i1=1;
  else
      i1=0;
  if(abs(fp2)>=p2)
      i2=1;
  else
      i2=0;          
  if(abs(fp3)>=p3)
      i3=1;
  else
      i3=0;
  if(abs(fp4)>=p4)
      i4=1;
  else
      i4=0;
  if(abs(fp5)>=p5)
      i5=1;
  else
      i5=0;
  long int ans = (i1*10000)+(i2*1000)+(i3*100)+(i4*10)+i5;
  buttonState = digitalRead(buttonPin);
  digitalWrite(ledPin,buttonState);
  if (buttonState == LOW)                      //Character mode loop
{    
  ans+=200000;
}
 else                                          //Sentence mode loop
{
  ans+=300000; 
}
  delay(1000);                  
}
