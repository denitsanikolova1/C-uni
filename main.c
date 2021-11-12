#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

 
int main(void){
 int num;
 printf("Enter an integer:  ");
 scanf("%d", &num);
 if  (num % 2 == 0) {
	 printf("You entered an even number: %d.", num);
    }
 else {
	 printf("You entered an odd number: %d.",num);
    }
 
return 0;
}