#include "CMSIS/stm32f10x.h"
#include <stdint.h>
uint8_t res;
uint8_t countSetBits(uint32_t ch);

int main()
{
	res = countSetBits(9);
}

uint8_t countSetBits(uint32_t ch)
{
	uint8_t nEdn = 0;
	uint32_t Ost = 0;

while (ch>1)
{
	Ost = ch%2; 
	if (Ost==1)
	{
		nEdn = nEdn + 1;
		ch = (ch - 1)/2;
	}
	else ch = ch/2;
}
if (ch==1) nEdn = nEdn + 1;

return(nEdn);
}
