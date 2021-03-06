#define dW digitalWrite
#define CR1 22    // 紅燈第一支腳
#define CG1 30    // 綠燈第一支腳
#define CB1 38    // 藍燈第一支腳

#define S0 46
#define S1 47
#define S2 48
#define EN 49
int i ;
void setup() {
  
  for( i=CR1; i<=EN; i++ )    // 從 D22 到 D49 全部都是 OUTPUT
  {
    pinMode( i , OUTPUT );
    dW( i,1 );    // 不亮：設為1
  }
}

void loop() {
  dW( EN, 1 ); 

  SSS(0);
  dW( CR1, 0 );
  dW( CR1+7, 0);
  
  dW( CR1,1);
  dW( CR1+7, 1);
  
  SSS(3);
  dW( CG1+3, 0 );
  dW( CG1+4, 0);
 
  dW( CG1+3, 1 );
  dW( CG1+4, 1);
  
  SSS(4);
  dW( CG1+3, 0 );
  dW( CG1+4, 0);
  
  dW( CG1+3, 1 );
  dW( CG1+4, 1);
  
  SSS(7);
  dW( CR1, 0 );
  dW( CR1+7, 0);
  
  dW( CR1, 1 );
  dW( CR1+7, 1); 

  
}

void SSS(int x){
  switch(x){
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
