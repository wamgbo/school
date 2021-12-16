#include "LiquidCrystal.h"

LiquidCrystal LCD(48, 46, 50, 51, 52, 53);

#define D1 38
#define D8 45
#define RW 47

void setup() {
  int i;
  pinMode(RW, OUTPUT);
  for (i = D1; i <= D8; i++) {
    pinMode(i, INPUT);
  }
  digitalWrite(RW, 0);
  LCD.begin(20, 2);
}
void loop() {
  int i, a=0, b=0;
  if(digitalRead(D1)==1){
 
    if(digitalRead(D8)==1)
      a+=1;
    if(digitalRead(D8-1)==1)
      a+=2;
    if(digitalRead(D8-2)==1)
      a+=4;
    if(digitalRead(D8-3)==1)
      a+=8;
    if(digitalRead(D8-4)==0)
      a+=16;
    if(digitalRead(D8-5)==0)
      a+=32;
    if(digitalRead(D8-6)==0)
      a+=64;
  LCD.print(a);   
  }
  if(digitalRead(D1)==0){
 
    if(digitalRead(D8)==0)
      a+=1;
    if(digitalRead(D8-1)==0)
      a+=2;
    if(digitalRead(D8-2)==0)
      a+=4;
    if(digitalRead(D8-3)==0)
      a+=8;
    if(digitalRead(D8-4)==1)
      a+=16;
    if(digitalRead(D8-5)==1)
      a+=32;
    if(digitalRead(D8-6)==1)
      a+=64;
  LCD.print(0-a-1);   
  }
    
  
  
  delay(300);
  LCD.clear();
  
  
  }
