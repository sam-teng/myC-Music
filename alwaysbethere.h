#include "DoReMi.h"
#define Buzzer 1   //蜂鳴器
int tx;
int T[] = {0,Do,Re,Mi,Fa,So,La,Si,Sib,HDo,HRe};//It is F大調 (原版)
//int {}="Hz";
void alwaysbethere(){
	if(tx == 'D' || tx == 'd'){
	int T[] = {0,LSi,LDo,LRe,Do,Re,Mi,Fa,So,La,Sib};//It is F大調 (原版)
	tone(Buzzer,{T[0]});
}
tone(Buzzer,{T[4]});
delay(250);
tone(Buzzer,{T[5]});
delay(250);
tone(Buzzer,{T[6]});
delay(250);
tone(Buzzer,{T[4]});
delay(250);
tone(Buzzer,{T[9]});
delay(750);

tone(Buzzer,{T[6]});
delay(250);
tone(Buzzer,{T[5]});
delay(500);
tone(Buzzer,{T[9]});
delay(500);
tone(Buzzer,{T[5]});
delay(500);

tone(Buzzer,{T[4]});
delay(250);
tone(Buzzer,{T[2]});
delay(250);
tone(Buzzer,{T[6]});
delay(750);
tone(Buzzer,{T[4]});
delay(250);
tone(Buzzer,{T[3]});
delay(1000);

//======
if(tx == 'D' || tx == 'd'){
	
	tone(Buzzer,{T[0]});
}else{
tone(Buzzer,{T[4]});
delay(250);
tone(Buzzer,{T[3]});
delay(250);
}
//======
tone(Buzzer,{T[2]});
delay(500);
tone(Buzzer,{T[3]});
delay(500);
tone(Buzzer,{T[4]});
delay(250);
tone(Buzzer,{T[5]});
delay(250);
tone(Buzzer,{T[1]});
delay(500);
tone(Buzzer,{T[4]});
delay(500);
tone(Buzzer,{T[5]});
delay(250);
tone(Buzzer,{T[6]});
delay(250);

tone(Buzzer,{T[8]});
delay(500);
tone(Buzzer,{T[0]});
tone(Buzzer,{T[8]});
delay(250);
tone(Buzzer,{T[6]});
delay(250);
tone(Buzzer,{T[5]});
delay(250);
tone(Buzzer,{T[4]});
delay(250);
tone(Buzzer,{T[5]});
delay(1000);

//======2
tone(Buzzer,{T[4]});
delay(250);
tone(Buzzer,{T[5]});
delay(250);
tone(Buzzer,{T[6]});
delay(250);
tone(Buzzer,{T[4]});
delay(250);
tone(Buzzer,{T[9]});
delay(750);

tone(Buzzer,{T[6]});
delay(250);
tone(Buzzer,{T[5]});
delay(500);
tone(Buzzer,{T[9]});
delay(500);
tone(Buzzer,{T[5]});
delay(500);

tone(Buzzer,{T[4]});
delay(250);
tone(Buzzer,{T[2]});
delay(250);
tone(Buzzer,{T[0]});
tone(Buzzer,{T[2]});
delay(500);
tone(Buzzer,{T[3]});
delay(250);
tone(Buzzer,{T[4]});
delay(250);
tone(Buzzer,{T[1]});
delay(1000);
tone(Buzzer,{T[0]});

tone(Buzzer,{T[1]});
delay(500);
tone(Buzzer,{T[2]});
delay(500);
tone(Buzzer,{T[3]});
delay(500);
tone(Buzzer,{T[4]});
delay(250);
tone(Buzzer,{T[5]});
delay(250);

tone(Buzzer,{T[1]});
delay(500);
tone(Buzzer,{T[4]});
delay(500);
tone(Buzzer,{T[5]});
delay(250);
tone(Buzzer,{T[6]});
delay(250);

tone(Buzzer,{T[8]});
delay(500);
tone(Buzzer,{T[0]});
tone(Buzzer,{T[8]});
delay(250);
tone(Buzzer,{T[6]});
delay(250);
tone(Buzzer,{T[5]});
delay(250);
tone(Buzzer,{T[4]});
delay(250);
tone(Buzzer,{T[0]});
tone(Buzzer,{T[4]});
delay(1250);
tone(Buzzer,{T[0]});

//======2-1
tone(Buzzer,{T[4]});
delay(1000);
tone(Buzzer,{T[6]});
delay(250);
tone(Buzzer,{T[8]});
delay(250);

tone(Buzzer,{T[9]});
delay(500);
tone(Buzzer,{T[0]});
tone(Buzzer,{T[9]});
delay(500);
tone(Buzzer,{T[0]});
tone(Buzzer,{T[9]});
delay(500);
tone(Buzzer,{T[0]});

tone(Buzzer,{T[9]});
delay(500);
tone(Buzzer,{T[0]});
delay(125);
tone(Buzzer,{T[9]});
delay(250);
tone(Buzzer,{T[10]});
delay(250);
tone(Buzzer,{T[9]});
delay(250);
tone(Buzzer,{T[8]});
delay(250);

tone(Buzzer,{T[6]});
delay(500);
tone(Buzzer,{T[0]});
tone(Buzzer,{T[6]});
delay(500);
tone(Buzzer,{T[0]});
tone(Buzzer,{T[6]});
delay(500);
tone(Buzzer,{T[0]});

tone(Buzzer,{T[6]});
delay(500);
tone(Buzzer,{T[0]});
delay(125);
tone(Buzzer,{T[6]});
delay(250);

tone(Buzzer,{T[8]});
delay(250);
tone(Buzzer,{T[6]});
delay(250);
tone(Buzzer,{T[5]});
delay(250);

tone(Buzzer,{T[4]});
delay(500);
tone(Buzzer,{T[0]});

tone(Buzzer,{T[4]});
delay(500);
tone(Buzzer,{T[0]});
delay(125);
tone(Buzzer,{T[4]});
delay(250);
tone(Buzzer,{T[3]});
delay(250);
tone(Buzzer,{T[2]});
delay(250);
tone(Buzzer,{T[3]});
delay(250);
tone(Buzzer,{T[0]});

tone(Buzzer,{T[3]});
delay(250);
tone(Buzzer,{T[4]});
delay(250);
tone(Buzzer,{T[5]});
delay(500);
tone(Buzzer,{T[0]});
tone(Buzzer,{T[5]});
delay(250);
tone(Buzzer,{T[6]});
delay(250);
tone(Buzzer,{T[5]});
delay(250);
tone(Buzzer,{T[6]});
delay(250);
tone(Buzzer,{T[5]});
delay(1000);
//======2-2
tone(Buzzer,{T[4]});
delay(1000);
tone(Buzzer,{T[6]});
delay(250);
tone(Buzzer,{T[8]});
delay(250);

tone(Buzzer,{T[9]});
delay(500);
tone(Buzzer,{T[0]});
tone(Buzzer,{T[9]});
delay(500);
tone(Buzzer,{T[0]});
tone(Buzzer,{T[9]});
delay(500);
tone(Buzzer,{T[0]});

tone(Buzzer,{T[9]});
delay(500);
tone(Buzzer,{T[0]});
delay(125);
tone(Buzzer,{T[9]});
delay(250);
tone(Buzzer,{T[10]});
delay(250);
tone(Buzzer,{T[9]});
delay(250);
tone(Buzzer,{T[8]});
delay(250);

tone(Buzzer,{T[6]});
delay(500);
tone(Buzzer,{T[0]});
tone(Buzzer,{T[6]});
delay(500);
tone(Buzzer,{T[0]});
tone(Buzzer,{T[6]});
delay(500);
tone(Buzzer,{T[0]});

tone(Buzzer,{T[6]});
delay(500);
tone(Buzzer,{T[0]});
delay(125);
tone(Buzzer,{T[6]});
delay(250);

tone(Buzzer,{T[8]});
delay(250);
tone(Buzzer,{T[6]});
delay(250);
tone(Buzzer,{T[5]});
delay(250);

tone(Buzzer,{T[4]});
delay(500);
tone(Buzzer,{T[0]});

tone(Buzzer,{T[4]});
delay(500);
tone(Buzzer,{T[0]});
delay(125);
tone(Buzzer,{T[4]});
delay(250);
tone(Buzzer,{T[3]});
delay(250);
tone(Buzzer,{T[2]});
delay(250);
tone(Buzzer,{T[3]});
delay(250);
tone(Buzzer,{T[0]});

tone(Buzzer,{T[3]});
delay(250);
tone(Buzzer,{T[4]});
delay(250);
tone(Buzzer,{T[5]});
delay(500);
tone(Buzzer,{T[0]});
tone(Buzzer,{T[5]});
delay(250);
tone(Buzzer,{T[6]});
delay(250);
tone(Buzzer,{T[5]});
delay(250);
tone(Buzzer,{T[6]});
delay(250);
tone(Buzzer,{T[5]});
delay(1000);
tone(Buzzer,{T[0]});
//======3
tone(Buzzer,{T[5]});
delay(250);
tone(Buzzer,{T[4]});
delay(250);
tone(Buzzer,{T[0]});
tone(Buzzer,{T[4]});
delay(1250);
}
