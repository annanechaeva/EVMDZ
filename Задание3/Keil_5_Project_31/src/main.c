#include "CMSIS/stm32f10x.h" 
#include "stdlib.h" 
 
int32_t strToInt( const char * str ); 
int32_t res; 
   
int main() 
{
  //res = strToInt("2 147 483 647"); 
  //res = strToInt("-2 147 483 648");  
	  res = strToInt("-100 123"); 
  return 0; 
}  
 
int32_t strToInt( const char * str ) 
{ 
 int64_t n = 0; 
 int64_t  sign = 0; 
 int64_t buf = 0;
  
 if (str[n] == 0x2D) // Знак "-"
	{ 
		sign = 1; 
		n = 1; 
	} 
  
 while (str[n] != 0) // конец строки \0
 { 
	if (str[n] >= 0x30 && str[n] <= 0x39) // от 0  до 9
		{ 
			buf = buf * 10; // сдвиг на порядок (кроме первого прохода при buf = 0)
			buf = buf + (str[n] & 0x0F); // выделяем вторую 16-ричную цифру
		}			
		n++; 
	} 
 
 if (sign == 1) buf = -buf; 
 return (buf); 
}
