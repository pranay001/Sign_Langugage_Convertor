# code_pranay

void setup() 
{
  pinMode(7,INPUT);             // tacho input pin
  pinMode(6,OUTPUT);            // arduino output equivalent to mpu freq
  
  while(digitalRead(7)==HIGH)
  {}
  while(digitalRead(7)==LOW)
  {}
  Serial.begin(9600);
}

void loop()
{
  long a=micros();                    // time period measurement of tacho waveform 
  while(digitalRead(7)==HIGH)
  {}
  while(digitalRead(7)==LOW)
  {}
  long b=micros();
  
  long c = b-a;                             // frequency computation of tacho
  float Ftacho = (float)1000000/(float)c;
  Serial.print("tacho frequency = ");
  Serial.println(Ftacho);
  
  float Fmpu = Ftacho * 70;                 // mpu frequency mapping
  tone(6,Fmpu);                             // mpu frequency synthesis  
  Serial.print("MPU frequency = ");
  Serial.println(Fmpu);
  
  int rpm = Ftacho * 30;                    // RPM mapping using tacho frequency
  Serial.print("RPM = ");
  Serial.println(rpm);
  
  while(digitalRead(7)==HIGH)
  {}
  while(digitalRead(7)==LOW)
  {}
  
 
}
