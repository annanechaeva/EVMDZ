#include "CMSIS/stm32f10x.h"
#include <stdint.h>
uint8_t res;
uint8_t countLeadingZero(uint32_t n);

int main()
{
res=countLeadingZero(1024);
}

uint8_t countLeadingZero(uint32_t n)
{
	uint32_t x = 0x80000000;  
	uint8_t m = 32;
	
while (x>0)
{
	if (n >= x) return(32-m);
	x = x/2;
	m--;
}
return(32);
}
