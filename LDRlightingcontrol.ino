#include <LiquidCrystal.h> //Liquid Crystal display library
//Define the LED pins.
int stop=7;
int ready=6;
int go=5;
int ldrpin=A0;                   
LiquidCrystal lcd(13,12,11,10,9,8); //LiquidCrystal object to define the LCD pins.

void setup() {
  // put your setup code here, to run once:
//Initiate the lcd
lcd.begin(16,2);
//Define the operating mode of the pins
pinMode(stop, OUTPUT);
pinMode(ready, OUTPUT);
pinMode(go, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
//Read and store data from LDR.
int LDR=analogRead(ldrpin);
int temp=map(LDR,0,1023,0,255);
//Print reading of LDR on LCD
lcd.setCursor(0,0);
lcd.print("ADC value= ");
lcd.print(temp);
delay(10);
lcd.clear();

if (LDR==0)
{
  digitalWrite(stop, LOW);
  digitalWrite(ready, LOW);
  digitalWrite(go, LOW);
}
if(LDR>0)
{
digitalWrite(stop,HIGH);
digitalWrite(ready, LOW);
digitalWrite(go, LOW);
}
if(LDR>96)
{
digitalWrite(ready,HIGH);
digitalWrite(stop,LOW);
digitalWrite(go, LOW);
}
if(LDR>192)
{
digitalWrite(go,HIGH);
digitalWrite(stop,LOW);
digitalWrite(ready, LOW);

}
}
