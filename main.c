#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int main(void)
{
	float num;
	float anotherNum;

	printf("Enter a floating point number: ");
	scanf("%f", &num);
 
	printf("Enter another floating point number: ");
	scanf("%f", &anotherNum);

	printf("%f", num);
	printf("%f", anotherNum);

  return 0;  
}