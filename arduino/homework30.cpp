#include "LiquidCrystal.h"
LiquidCrystal LCD(48, 46, 50, 51, 52, 53);

#define keyC1 22
#define keyC2 23
#define keyC3 24
#define keyC4 25
#define keyR1 26
#define keyR2 27
#define keyR3 28
#define keyR4 29

#define delayTime 100

void setup() {
  byte i ;
  
 
  for( i=0; i<=3; i++ )
  {
    pinMode( keyC1+i, OUTPUT );
    pinMode( keyR1+i, INPUT );
  }
  
  pinMode(47, OUTPUT);
  digitalWrite(47, 0);
  LCD.begin(20, 2);
}



void loop() {
  byte i;
  digitalWrite(keyC1,0);digitalWrite(keyC2,1);digitalWrite(keyC3,1);digitalWrite(keyC4,1);
    if( digitalRead(keyR1)==0 )
    {
      LCD.print(0);
    }
  digitalWrite(keyC1,0);digitalWrite(keyC2,1);digitalWrite(keyC3,1);digitalWrite(keyC4,1);
    if( digitalRead(keyR1+1)==0 )
    {
      LCD.print(4);
    }
  digitalWrite(keyC1,0);digitalWrite(keyC2,1);digitalWrite(keyC3,1);digitalWrite(keyC4,1);
    if( digitalRead(keyR1+2)==0 )
    {
      LCD.print(8);
    }
   digitalWrite(keyC1,0);digitalWrite(keyC2,1);digitalWrite(keyC3,1);digitalWrite(keyC4,1);
    if( digitalRead(keyR1+3)==0 )
    {
      LCD.print ('C');
    }
    //_____________________________________________________________________________________________


    digitalWrite(keyC1,1);digitalWrite(keyC2,0);digitalWrite(keyC3,1);digitalWrite(keyC4,1);
    if( digitalRead(keyR1)==0 )
    {
      LCD.print(1);
    }
  digitalWrite(keyC1,1);digitalWrite(keyC2,0);digitalWrite(keyC3,1);digitalWrite(keyC4,1);
    if( digitalRead(keyR1+1)==0 )
    {
      LCD.print(5);
    }
  digitalWrite(keyC1,1);digitalWrite(keyC2,0);digitalWrite(keyC3,1);digitalWrite(keyC4,1);
    if( digitalRead(keyR1+2)==0 )
    {
      LCD.print(9);
    }
   digitalWrite(keyC1,1);digitalWrite(keyC2,0);digitalWrite(keyC3,1);digitalWrite(keyC4,1);
    if( digitalRead(keyR1+3)==0 )
    {
      LCD.print ('D');
    }
   //_____________________________________________________________________________________________

    digitalWrite(keyC1,1);digitalWrite(keyC2,1);digitalWrite(keyC3,0);digitalWrite(keyC4,1);
    if( digitalRead(keyR1)==0 )
    {
      LCD.print(2);
    }
  digitalWrite(keyC1,1);digitalWrite(keyC2,1);digitalWrite(keyC3,0);digitalWrite(keyC4,1);
    if( digitalRead(keyR1+1)==0 )
    {
      LCD.print(6);
    }
  digitalWrite(keyC1,1);digitalWrite(keyC2,1);digitalWrite(keyC3,0);digitalWrite(keyC4,1);
    if( digitalRead(keyR1+2)==0 )
    {
      LCD.print('A');
    }
   digitalWrite(keyC1,1);digitalWrite(keyC2,1);digitalWrite(keyC3,0);digitalWrite(keyC4,1);
    if( digitalRead(keyR1+3)==0 )
    {
      LCD.print ('E');
    }
    //_______________________________________________________________________________________________

    digitalWrite(keyC1,1);digitalWrite(keyC2,1);digitalWrite(keyC3,1);digitalWrite(keyC4,0);
    if( digitalRead(keyR1)==0 )
    {
      LCD.print(3);
    }
  digitalWrite(keyC1,1);digitalWrite(keyC2,1);digitalWrite(keyC3,1);digitalWrite(keyC4,0);
    if( digitalRead(keyR1+1)==0 )
    {
      LCD.print(7);
    }
  digitalWrite(keyC1,1);digitalWrite(keyC2,1);digitalWrite(keyC3,1);digitalWrite(keyC4,0);
    if( digitalRead(keyR1+2)==0 )
    {
      LCD.print('B');
    }
   digitalWrite(keyC1,1);digitalWrite(keyC2,1);digitalWrite(keyC3,1);digitalWrite(keyC4,0);
    if( digitalRead(keyR1+3)==0 )
    {
      LCD.print ('F');
    }
  
  LCD.clear();


    
}
