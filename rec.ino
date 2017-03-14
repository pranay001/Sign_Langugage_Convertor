/*
XBee2 commands
+++
ATDH13A200
ATDL40B7A189
ATWR
ATCN
*/
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

char msg = ' '; 
const int led = 13; //led at pin 1
long int ans;
void setup() 
{
Serial.begin(9600);//Remember that the baud must be the same on both arduinos
lcd.begin(16, 2);
}
void loop() 
{
while(Serial.available()) 
{
  ans=Serial.read(); 
  lcd.setCursor(0, 1);
  if(ans!=100000)
      digitalWrite(led, LOW);
  if(ans == 211111)
  {
       lcd.print("A");
       delay(500);
  }
  else if(ans == 201111)
  {
       lcd.print("B");
       delay(500);
  }
  else if(ans == 211100)
  {
       lcd.print("C");
       delay(500);
  }
  else if(ans == 211010)
  {
       lcd.print("D");
       delay(500);
  }
  else if(ans == 210110)
  {
       lcd.print("E");
       delay(500);
  }
  else if(ans == 201110)
  {
       lcd.print("F");
       delay(500);
  }
  else if(ans == 211001)
  {
       lcd.print("G");
       delay(500);
  }
  else if(ans == 210101)
  {
       lcd.print("H");
       delay(500);
  }
  else if(ans == 201101)
  {
       lcd.print("I");
       delay(500);
  }  
  else if(ans == 210111 )
  {
       lcd.print("J");
       delay(500);
  }
  else if(ans == 201011)
  {
       lcd.print("K");
       delay(500);
  }
  else if(ans == 200111)
  {
       lcd.print("L");
       delay(500);
  }
  else if(ans == 200011)
  {
       lcd.print("M");
       delay(500);
  }
  else if(ans == 211000)
  {
       lcd.print("N");
       delay(500);
  }
  else if(ans == 210001)
  {
       lcd.print("O");
       delay(500);
  }
  else if(ans == 200101)
  {
       lcd.print("P");
       delay(500);
  }
  else if(ans == 210000)
  {
       lcd.print("Q");
       delay(500);
  }
  else if(ans == 200001)
  {
       lcd.print("R");
       delay(500);
  }
  else if(ans == 201010)
  {
       lcd.print("S");
       delay(500);
  }
  else if(ans == 210010)
  {
       lcd.print("T");
       delay(500);
  }
  else if(ans == 210011)
  {
       lcd.print("U");
       delay(500);
  }
  else if(ans == 201111)//change
  {
       lcd.print("V");
       delay(500);
  }
  else if(ans == 200110)
  {
       lcd.print("W");
       delay(500);
  }
  else if(ans == 201111)//change
  {
       lcd.print("X");
       delay(500);
  }
  else if(ans == 201111)//change
  {
       lcd.print("Y");
       delay(500);
  }
  else if(ans == 201111)//change
  {
       lcd.print("Z");
       delay(500);
  }
  else if(ans == 211011)
  {
       lcd.print(" ");
       delay(500);
  }  
 
  else if(ans == 311111)
  {
       lcd.print("Hai ");
       delay(500);
  }
  else if(ans == 301111)
  {
       lcd.print("How are you ");
       delay(500);
  }
  else if(ans == 311100)
  {
       lcd.print("I am fine.. ");
       delay(500);
  }
  else if(ans == 311010)
  {
       lcd.print("Where are you going? ");
       delay(500);
  }
  else if(ans == 310110)
  {
       lcd.print("Can you give me some food ");
       delay(500);
  }
  else if(ans == 301110)
  {
       lcd.print("Get me some water ");
       delay(500);
  }
  else if(ans == 311001)
  {
       lcd.print("Good morning ");
       delay(500);
  }
  else if(ans == 310101)
  {
       lcd.print("Good evening ");
       delay(500);
  }
  else if(ans == 301101)
  {
       lcd.print("Good afternoon ");
       delay(500);
  }  
  else if(ans == 310111 )
  {
       lcd.print("Good night ");
       delay(500);
  }
  else if(ans == 301011)
  {
       lcd.print("Thankyou ");
       delay(500);
  }
  else if(ans == 300111)
  {
       lcd.print("See you again ");
       delay(500);
  }
  else if(ans == 300011)
  {
       lcd.print("Bye ");
       delay(500);
  }
  else if(ans == 311000)
  {
       lcd.print("How was your day ");
       delay(500);
  }
  else if(ans == 310001)
  {
       lcd.print("Happy ");
       delay(500);
  }
  else if(ans == 300101)
  {
       lcd.print("Why are you sad? ");
       delay(500);
  }
  else if(ans == 310000)
  {
       lcd.print("What are you doing? ");
       delay(500);
  }
  else if(ans == 300001)
  {
       lcd.print("No ");
       delay(500);
  }
  else if(ans == 301010)
  {
       lcd.print("Yes ");
       delay(500);
  }
  else if(ans == 310010)
  {
       lcd.print("what? ");
       delay(500);
  }
  else if(ans == 310011)
  {
       lcd.print("Do you understand?");
       delay(500);
  }
  else if(ans == 301111)//change
  {
       lcd.print("Do it right! ");
       delay(500);
  }
  else if(ans == 300110)
  {
       lcd.print("Are you coming with me? ");
       delay(500);
  }
  else if(ans == 30111)//change
  {
       lcd.print("I don't think so ");
       delay(500);
  }
  else if(ans == 301111)//change
  {
       lcd.print("I don't like it ");
       delay(500);
  }
  else if(ans == 301111)//change
  {
       lcd.print("I don't know anybody ");
       delay(500);
  }
  else if(ans == 311011)
  {
       lcd.print(" ");
       delay(500);
  } 
  else
  {
       digitalWrite(led, HIGH);
  }  

  lcd.print(millis() / 1000);
delay(1000);
}
}
