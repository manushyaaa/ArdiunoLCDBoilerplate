// LCD  Start 
#include <LiquidCrystal.h>
// initialize LCD interface pins with the arduino pin number
const int rs = A5, en = A7, d4 = A10, d5 = A11, d6 = A12, d7 = A13;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  //######################################################## LiquidCrystal Display PIN Config *** BEGIN ***
  // Analog PIN NO A[xx], Actual PIN on LCD, REF on LCD

  pinMode(A15, OUTPUT);// PIN 16 BLK
  pinMode(A14, OUTPUT);// PIN 15 BLA
  //D7 = A13           // PIN 14 D7
  //D6 = A12           // PIN 13 D6
  //D5 = A11           // PIN 12 D5
  //D4 = A10           // PIN 11 D4

  //EN = A7            // PIN 6 EN
  pinMode(A6, OUTPUT); // PIN 5 RW
  //RS = A5            // PIN 4 RS
  //VO = POT           // PIN 3 VO    [ Connection Via Potentiometer ] // No pin Required on Arduino
  pinMode(A4, OUTPUT); // PIN 2 VCC
  pinMode(A3, OUTPUT); // PIN 1 GND

  digitalWrite(A15, LOW); // PIN 16 BLK KEEP IT Negative
  digitalWrite(A14, HIGH);// PIN 15 BLA KEEP IT Positive

  digitalWrite(A6, LOW);  // PIN 5  RW  KEEP IT Negative

  digitalWrite(A4, HIGH); // PIN 2 VCC  KEEP IT Positive
  digitalWrite(A3, LOW);  // PIN 1 GND  KEEP IT Negative

  //########################################################
  //FREE ANALOG PINs of MEGA   ***  A0, A1, A2, A8, A9  ***
  //######################################################## LiquidCrystal Display PIN Config *** END ***
  lcd.begin(20, 4);       // LCD TYPE 20 CHAR 4 Lines

// LCD  END 
  lcd.setCursor(0, 0);
  lcd.print("Hello World");
}

void loop() {
  lcd.setCursor(0, 1);
  lcd.print(millis()/1000);
}