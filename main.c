#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int main(void)
{ 
int num;
for(num = 17; num <= 100; num++)
	{
		if((num%17) == 0) {
			printf("%d\n", num);
		}
	}
	return 0;
}