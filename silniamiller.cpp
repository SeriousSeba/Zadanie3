#include <stdio.h>
int silnia(int n){
	if (n<2) return 1;
	return n*silnia(n-1);
}


int main(){
	int n,s,i;
	scanf("%d",&n);
	s=n;
	printf("%d\n",silnia(n));
	for (i=n;i>1;i--)
		s=s*(i-1);
	printf("%d",s);
	
}
