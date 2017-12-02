#include "CMSIS/stm32f10x.h"
#include <stdint.h>
int32_t med;
void sort(int32_t * buf, uint32_t size);
int32_t getMedian(int32_t * buf, uint32_t size);

int main()
{
	int32_t arr[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	sort(arr,10);
	int32_t arr2[13] = {13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
  med=getMedian(arr2,13);
}
void sort(int32_t * buf, uint32_t size)
{
  for (int i=size-1; i>=0; i--)
  {
    for (int j=0; j<i; j++)
    {
      if (buf[j] > buf[j+1])
      {
        int tmp = buf[j];
        buf[j] = buf[j+1];
        buf[j+1] = tmp;
      }
    }
  }
}

// size - нечетное число
int32_t getMedian(int32_t * buf, uint32_t size)
{
  for (int i=size-1; i>=0; i--)
  {
    for (int j=0; j<i; j++)
    {
      if (buf[j] > buf[j+1])
      {
        int tmp = buf[j];
        buf[j] = buf[j+1];
        buf[j+1] = tmp;
      }
    }
  }
	// средний элемент отсортированного "нечетного массива"
	return (buf[size/2]); 
}
