#include <stdint.h>
#include <stdbool.h>
 
int8_t ch;
int16_t sh;
int32_t in;
int64_t lo;
uint8_t uch;
uint16_t ush;
uint32_t uin;
uint64_t ulo;
 int32_t ar1[2];
 uint32_t ar2[2];
 float fl;
 double dob;
 //int *p;
 
 
int main(void)
{
//p = &in;
//*p = 25;	
//*p = 26;	
	//in=27;
	//in = 28;
	
	ch=200;
	sh=200;
	in=200;
	lo=200;
	uch=200;
	ush=200;
	uin=200;
	ulo=200;


	ch=3000;
	sh=3000;
	in=3000;
	lo=3000;
	uch=3000;
	ush=3000;
	uin=3000;
	ulo=3000;
	
	ch=0x550;
	sh=0x7200;
	in=0x550;
	lo=0x550;
	uch=0x550;
	ush=0x550;
	uin=0x550;
	ulo=0x550;
	
	ch=0x123123;
	sh=0x123123;
	in=0x123123;
	lo=0x123123;
	uch=0x123123;
	ush=0x123123;
	uin=0x123123;
	ulo=0x123123;
	
	ch=-100;
	sh=-100;
	in=-100;
	lo=-100;
	uch=-100;
	ush=-100;
	uin=-100;
	ulo=-100;
	
	ch=1.57;
	sh=1.57;
	in=1.57;
	lo=1.57;
	uch=1.57;
	ush=1.57;
	uin=1.57;
	ulo=1.57;
	
	fl = 0.15;
	dob = 33.75757;
	
	ar1[0] = 1;
	ar1[1] = 2;
	ar2[0] = 3;
	ar2[1] = 4;
	}
