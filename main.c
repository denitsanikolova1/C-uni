#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int main(void)
{ 
int a,b;
a=1;
a++;
b=a;
b--;
printf("%d %d", a,b);

return 0;
}