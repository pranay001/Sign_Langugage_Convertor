const int flexpin1 = A0;
 const int flexpin2 = A1;
const int flexpin3 = A2;
const int p1=-19;
const int p2=88;
const int p3=1009;
const int pop=7;
int led = 13;

const int buttonPin = 2;     // the number of the pushbutton pin
const int ledPin =  3; 
int buttonState = 0;         // variable for reading the pushbutton status

void setup()
{
  pinMode( led, OUTPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(pop, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
  digitalWrite(pop, HIGH);
Serial.begin(9600);

}
void loop()
{
int fp1,fp2,fp3; // Input value from the analog pin.
  digitalWrite(led, HIGH);
fp1 = analogRead(flexpin1);
fp2 = analogRead(flexpin2);
fp3 = analogRead(flexpin3);// Read the posit
fp1 = map(fp1, 700, 1000, 0, 100);
//Serial.print("sensor 1: ");
//Serial.println(fp1);
fp2 = map(fp2, 700, 1000, 0, 100);
//Serial.print("sensor 2: ");
//Serial.println(fp2);
//fp3 = map(fp3, 700, 1000, 0, 100);
//Serial.print("sensor 3: ");
//Serial.println(fp3);


  buttonState = digitalRead(buttonPin);
                 digitalWrite(ledPin,buttonState);
//Serial.println(buttonState);
  if (buttonState == HIGH) 
{
    // turn LED on:
  //               digitalWrite(ledPin, HIGH);
                 if((fp1>p1)&&(fp2>p2)&&(fp3>p3))
                 {
                       digitalWrite(led, LOW);
                       Serial.println("Hi ");
                       delay(2000);
                  }
                 else if((fp1>p1)&&(fp2>p2)&&(fp3<p3))
                  {
                        Serial.println("Bye");
                        digitalWrite(led, LOW);
                        delay(2000);
                  }
                else if((fp1>p1)&&(fp2<=p2)&&(fp3>p3))
                  {
                       Serial.println("How are you?");
                       digitalWrite(led, LOW);
                       delay(2000);
                  }
                 else if((fp1<p1)&&(fp2>p2)&&(fp3>p3))
                 {
                       Serial.println("Get me some water");
                       digitalWrite(led, LOW);
                       delay(2000);
                  }
                 else if((fp1>p1)&&(fp2<=p2)&&(fp3<p3))
                 {
                        Serial.println("Give me some food");
                        digitalWrite(led, LOW);
                        delay(2000);
                 }
                else if((fp1<=p1)&&(fp2>p2)&&(fp3<p3))
                 {
                        Serial.println("Thank You");
                        digitalWrite(led, LOW);
                        delay(2000);
                 }
              else if((fp1<p1)&&(fp2<=p2)&&(fp3>p3))
                {
                        Serial.println("See you again");
                        digitalWrite(led, LOW);
                        delay(2000);
                }
              else
                {
                       digitalWrite(led, HIGH);
    
                 }
}

else 
{
    // turn LED off:
    //digitalWrite(ledPin, LOW);
if((fp1>p1)&&(fp2>p2)&&(fp3>p3))
{
  digitalWrite(led, LOW);

  Serial.print("A");
  delay(2000);
}
else if((fp1>p1)&&(fp2>p2)&&(fp3<p3))
{
  Serial.print("B");
  digitalWrite(led, LOW);
  delay(2000);
}
else if((fp1>p1)&&(fp2<=p2)&&(fp3>p3))
{
  Serial.print("D");
  digitalWrite(led, LOW);
  delay(2000);
}
else if((fp1<p1)&&(fp2>p2)&&(fp3>p3))
{
  Serial.print("c");
  digitalWrite(led, LOW);
  delay(2000);
}
else if((fp1>p1)&&(fp2<=p2)&&(fp3<p3))
{
  Serial.print("E");
  digitalWrite(led, LOW);
  delay(2000);
}
else if((fp1<=p1)&&(fp2>p2)&&(fp3<p3))
{
  Serial.print("F");
  digitalWrite(led, LOW);
  delay(2000);
}
else if((fp1<p1)&&(fp2<=p2)&&(fp3>p3))
{
  Serial.print("G");
  digitalWrite(led, LOW);
  delay(2000);
}
else
{
 digitalWrite(led, HIGH);
 
}
    
  }
delay(1000);
}

