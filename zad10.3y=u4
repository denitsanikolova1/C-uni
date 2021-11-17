#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <math.h>
double y(double x);
 
int main(void){
	int i;
	double x;
	printf("x          y(x)/n");
	for (i=20;i<51;i=i+1){
		x=i/100.0;
		printf("%f      %f\n",x,y(x));
	}

    return 0;
} 
double y(double x){
	double a,b,result;
	a = 2.2;
	b = 7.4;
	result = b*x - exp(-a*pow(x,2));
	return result;
}





