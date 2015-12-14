#include <stdio.h>
#include <math.h>
double oblicz(double r,double a){
	double x,y;
	x=cos(a*M_PI)*r;
	y=sqrt(r*r-x*x);
	printf("%lf %lf",x,y);
}
int main(){
	double r,a;
	scanf("%lf%lf",&r,&a);
	oblicz(r,a);
	
}
