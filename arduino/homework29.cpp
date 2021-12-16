#define LED1 30
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
  for( i=0; i<=15; i++ )
  {
    pinMode( LED1+i , OUTPUT );
    digitalWrite( i,0 );    
  }
  for( i=0; i<=3; i++ )
  {
    pinMode( keyC1+i, OUTPUT );
    pinMode( keyR1+i, INPUT );
  }
}


void loop() {
  byte i;
  digitalWrite(keyC1,0);digitalWrite(keyC2,1);digitalWrite(keyC3,1);digitalWrite(keyC4,1);
  for( i=0; i<=3; i++ )             // 掃描０、４、８、Ｃ這一排
  {
    if( digitalRead(keyR1+i)==0 )
    {
      digitalWrite( i*4+LED1, 1 );
      delay(delayTime);
      digitalWrite( i*4+LED1, 0 );
    }
  }
  digitalWrite(keyC1,1);digitalWrite(keyC2,0);digitalWrite(keyC3,1);digitalWrite(keyC4,1);
  for( i=0; i<=3; i++ )             // 掃描１、５、９、Ｄ這一排
  {
    if( digitalRead(keyR1+i)==0 )
    {
      digitalWrite( i*4+LED1+1, 1 );
      delay(delayTime);
      digitalWrite( i*4+LED1+1, 0 );
    }
  }
  digitalWrite(keyC1,1);digitalWrite(keyC2,1);digitalWrite(keyC3,0);digitalWrite(keyC4,1);
  for( i=0; i<=3; i++ )             
  {
    if( digitalRead(keyR1+i)==0 )
    {
      digitalWrite( i*4+LED1+2, 1 );
      delay(delayTime);
      digitalWrite( i*4+LED1+2, 0 );
    }
  }
  digitalWrite(keyC1,1);digitalWrite(keyC2,1);digitalWrite(keyC3,1);digitalWrite(keyC4,0);
  for( i=0; i<=3; i++ )             
  {
    if( digitalRead(keyR1+i)==0 )
    {
      digitalWrite( i*4+LED1+3, 1 );
      delay(delayTime);
      digitalWrite( i*4+LED1+3, 0 );
    }
  } 


    
}
