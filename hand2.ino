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
  int ans = (i1*10000)+(i2*1000)+(i3*100)+(i4*10)+i5;
  buttonState = digitalRead(buttonPin);
  digitalWrite(ledPin,buttonState);
  if (buttonState == LOW)                      //Character mode loop
{    
  if(ans!=00000)
      digitalWrite(led, LOW);
  if(ans == 11111)
  {
       Serial.print("A");
       delay(500);
  }
  else if(ans == 01111)
  {
       Serial.print("B");
       delay(500);
  }
  else if(ans == 11100)
  {
       Serial.print("C");
       delay(500);
  }
  else if(ans == 11010)
  {
       Serial.print("D");
       delay(500);
  }
  else if(ans == 10110)
  {
       Serial.print("E");
       delay(500);
  }
  else if(ans == 01110)
  {
       Serial.print("F");
       delay(500);
  }
  else if(ans == 11001)
  {
       Serial.print("G");
       delay(500);
  }
  else if(ans == 10101)
  {
       Serial.print("H");
       delay(500);
  }
  else if(ans == 01101)
  {
       Serial.print("I");
       delay(500);
  }  
  else if(ans == 10111 )
  {
       Serial.print("J");
       delay(500);
  }
  else if(ans == 01011)
  {
       Serial.print("K");
       delay(500);
  }
  else if(ans == 00111)
  {
       Serial.print("L");
       delay(500);
  }
  else if(ans == 00011)
  {
       Serial.print("M");
       delay(500);
  }
  else if(ans == 11000)
  {
       Serial.print("N");
       delay(500);
  }
  else if(ans == 10001)
  {
       Serial.print("O");
       delay(500);
  }
  else if(ans == 00101)
  {
       Serial.print("P");
       delay(500);
  }
  else if(ans == 10000)
  {
       Serial.print("Q");
       delay(500);
  }
  else if(ans == 00001)
  {
       Serial.print("R");
       delay(500);
  }
  else if(ans == 01010)
  {
       Serial.print("S");
       delay(500);
  }
  else if(ans == 10010)
  {
       Serial.print("T");
       delay(500);
  }
  else if(ans == 10011)
  {
       Serial.print("U");
       delay(500);
  }
  else if(ans == 011111)//change
  {
       Serial.print("V");
       delay(500);
  }
  else if(ans == 00110)
  {
       Serial.print("W");
       delay(500);
  }
  else if(ans == 011111)//change
  {
       Serial.print("X");
       delay(500);
  }
  else if(ans == 011111)//change
  {
       Serial.print("Y");
       delay(500);
  }
  else if(ans == 011111)//change
  {
       Serial.print("Z");
       delay(500);
  }
  else if(ans == 11011)
  {
       Serial.print(" ");
       delay(500);
  }  
  else
  {
       digitalWrite(led, HIGH);
  }  
}
 else                                                  //Sentence mode loop
{
  if(ans!=00000)
      digitalWrite(led, LOW);
  if(ans == 11111)
  {
       Serial.print("Hai ");
       delay(500);
  }
  else if(ans == 01111)
  {
       Serial.print("How are you ");
       delay(500);
  }
  else if(ans == 11100)
  {
       Serial.print("I am fine.. ");
       delay(500);
  }
  else if(ans == 11010)
  {
       Serial.print("Where are you going? ");
       delay(500);
  }
  else if(ans == 10110)
  {
       Serial.print("Can you give me some food ");
       delay(500);
  }
  else if(ans == 01110)
  {
       Serial.print("Get me some water ");
       delay(500);
  }
  else if(ans == 11001)
  {
       Serial.print("Good morning ");
       delay(500);
  }
  else if(ans == 10101)
  {
       Serial.print("Good evening ");
       delay(500);
  }
  else if(ans == 01101)
  {
       Serial.print("Good afternoon ");
       delay(500);
  }  
  else if(ans == 10111 )
  {
       Serial.print("Good night ");
       delay(500);
  }
  else if(ans == 01011)
  {
       Serial.print("Thankyou ");
       delay(500);
  }
  else if(ans == 00111)
  {
       Serial.print("See you again ");
       delay(500);
  }
  else if(ans == 00011)
  {
       Serial.print("Bye ");
       delay(500);
  }
  else if(ans == 11000)
  {
       Serial.print("How was your day ");
       delay(500);
  }
  else if(ans == 10001)
  {
       Serial.print("Happy ");
       delay(500);
  }
  else if(ans == 00101)
  {
       Serial.print("Why are you sad? ");
       delay(500);
  }
  else if(ans == 10000)
  {
       Serial.print("What are you doing? ");
       delay(500);
  }
  else if(ans == 00001)
  {
       Serial.print("No ");
       delay(500);
  }
  else if(ans == 01010)
  {
       Serial.print("Yes ");
       delay(500);
  }
  else if(ans == 10010)
  {
       Serial.print("what? ");
       delay(500);
  }
  else if(ans == 10011)
  {
       Serial.print("Do you understand?");
       delay(500);
  }
  else if(ans == 011111)//change
  {
       Serial.print("Do it right! ");
       delay(500);
  }
  else if(ans == 00110)
  {
       Serial.print("Are you coming with me? ");
       delay(500);
  }
  else if(ans == 01111)//change
  {
       Serial.print("I don't think so ");
       delay(500);
  }
  else if(ans == 01111)//change
  {
       Serial.print("I don't like it ");
       delay(500);
  }
  else if(ans == 01111)//change
  {
       Serial.print("I don't know anybody ");
       delay(500);
  }
  else if(ans == 11011)
  {
       Serial.print(" ");
       delay(500);
  } 
  else
  {
       digitalWrite(led, HIGH);
  }  
}
  delay(1000);                  
}
