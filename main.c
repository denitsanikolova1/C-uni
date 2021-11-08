#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int main(void)
{
 int num1, num2;
 int sum, product, choice;

 printf("Enter first number: ");
 scanf("%d", &num1);

 printf("Enter second number: ");
 scanf("%d", &num2);
 
 printf("1: Sum, 2: Product"); 
 printf("Enter choice: ");
 scanf("%d", &choice);
 
 sum = num1+num2;
 product = num1*num2;

 if (choice == 1) printf("%d+ %d = %d", num1, num2,sum);
 else printf("%d*%d = %d",num1, num2, product);


  return 0;  
}