#include <stdio.h>
#include <math.h>

int main(){
	double a;
	double b;
	double c;
	printf("Enter value of a\n");
	scanf("%lf",&a);
	
	printf("Enter value of b\n");
	scanf("%lf",&b);
	
	printf("Enter value of c\n");
	scanf("%lf",&c);
	
	printf("Now your function is :%lfx^2 + %lf x+ %lf =0\n",a,b,c);
	
	double x1=(-b+sqrt(b*b -4*a*c))/(2*a);
	double x2=(-b-sqrt(b*b -4*a*c))/(2*a);
	
	printf("the roots of :%lfx2 + %lf x+ %lf =0\n are\n x=%lf and x=%lf",a,b,c,x1,x2);
	
}