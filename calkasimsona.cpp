#include <stdio.h>
long double f(long double h){
	 h=2*h*h*h+5;
	 return h;
}


long double simson(long double a,long double b,long double d){
	long double c,S,h,s1,s2;
	h=b-a;
	S=h*(f(a) + 4*f(a/2+b/2)+f(b))/6;
	printf("%lf\n",S);
	c=(a+b)/2;
	h=c-a;
	s1=h*(f(a) + 4*f(a/2+c/2)+f(c))/6;
	printf("%lf\n",s1);
	h=b-c;
	s2=h*(f(c) + 4*f(c/2+b/2)+f(b))/6;
	printf("%lf\n",s2);
	if (S-(s1+s2)>d) {
	simson(a,c,d/2);
	simson(c,b,d/2);}
	else return S;
	
}
int main(){int a,b;
	long double d;
	scanf("%d%d%lf",&a,&b,&d);
	simson(a,b,d);
	
	printf("%lf",simson(a,b,d));
}
