#include <stdio.h>
#include <math.h>
double licz(double g,double h){
	double m,o;
	m=hypot(g,h);
	o=atan(h/g);
	return m;
}

double licz2(double g,double h){
	double m,o;
	m=hypot(g,h);
	o=atan(h/g);
	return o;	
	
	
	
}
int main()
{double r,u,*a,*b;
	r=10;u=2;
	licz(r,u);
	a=&licz;
	
	
	
	printf("%p%p",a,b);
	
}
