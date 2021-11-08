#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int main(void)
{
 int num1, num2;
 int sum, subtraction, choice;

 printf("Enter first number: ");
 scanf("%d", &num1);

 printf("Enter second number: ");
 scanf("%d", &num2);
 
 printf("1: Sum, 2: Subtraction"); 
 printf("Enter choice: ");
 scanf("%d", &choice);
 
 sum = num1+num2;
 subtraction = num1-num2;

 if (choice == 1) printf("%d+ %d = %d", num1, num2,sum);
 else printf("%d-%d = %d", num1, num2, subtraction);


  return 0;  
}