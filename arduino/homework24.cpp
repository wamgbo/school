#define CR1 22
#define CG1 30
#define CB1 38

#define S0 46
#define S1 47
#define S2 48
#define EN 49

#define dW digitalWrite

#define delayTime 1
#define holdTime 600

const byte red1[8] = {    // 這個Ａ用十六進制來寫
  B11110111,
  B11000111,
  B11110111,
  B11110111,
  B11110111,
  B11110111,
  B11110111,
  B10000001
};

const byte red0[8] = {    // 這個Ｂ用二進制來寫
  B11111111,
  B10000011,
  B10111011,
  B10111011,
  B10111011,
  B10111011,
  B10111011,
  B10000011
} ;
const byte red2[8] = {
  B11111111,
  B10000111,
  B11110111,
  B11110111,
  B10000111,
  B10111111,
  B10111111,
  B10000111
} ;

void setup() {
  byte i ;
  for( i=CR1; i<=49; i++ )
  {
    pinMode( i , OUTPUT );
    dW( i,1 );    // 不亮：1
  }
}

void loop() {
  byte i,j,k;
  

  k=holdTime;
  while(k>0){     // 維持亮好多次的Ａ
    for(i=0; i<=7; i++){
      dW( EN, 0 );
      sss(i);
      for(j=0; j<=7; j++) {
        dW( CR1+j, bitRead(red0[j],7-i) );
      }
      dW( EN, 1 );    
      delay(delayTime);    
    }
    k--;     
  }
 
  k=holdTime;
  while(k>0){    // 維持亮好多次的Ｂ
    for(i=0; i<=7; i++){
      dW( EN, 0 );
      sss(i);
      for(j=0; j<=7; j++) {
        dW( CG1+j, bitRead(red1[j],7-i) );
      }    
      dW( EN, 1 );
      delay(delayTime);    
    }
    k--;     
  } 

  k=holdTime;
  while(k>0){    // 維持亮好多次的Ｂ
    for(i=0; i<=7; i++){
      dW( EN, 0 );
      sss(i);
      for(j=0; j<=7; j++) {
        dW( CB1+j, bitRead(red2[j],7-i) );
      }    
      dW( EN, 1 );
      delay(delayTime);    
    }
    k--;     
  } 
}

void sss(byte num){
  switch(num){
    case 0:dW( S2, 0 );  dW( S1, 0 );  dW( S0, 0 );
           break;
    case 1:dW( S2, 0 );  dW( S1, 0 );  dW( S0, 1 );
           break;
    case 2:dW( S2, 0 );  dW( S1, 1 );  dW( S0, 0 );
           break;
    case 3:dW( S2, 0 );  dW( S1, 1 );  dW( S0, 1 );
           break;
    case 4:dW( S2, 1 );  dW( S1, 0 );  dW( S0, 0 );
           break;
    case 5:dW( S2, 1 );  dW( S1, 0 );  dW( S0, 1 );
           break;
    case 6:dW( S2, 1 );  dW( S1, 1 );  dW( S0, 0 );
           break;
    case 7:dW( S2, 1 );  dW( S1, 1 );  dW( S0, 1 );                                                                                  
  }
}
