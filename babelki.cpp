#include <stdio.h>
#define SIZE 15
int bubble(char a[],int n){
	int i,j;
	char temp;
	for (i=0;i<n;i++)
		for(j=0;j<n-i-1;j++)
			if (a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				
			}
}
int main(){
	int i,n;
	char a[SIZE];
	scanf("%d",&n);
	for (i=0;i<n;i++)
		a[i]=0;	
	scanf("%s",&a);
	printf("%c\n",a[3]);	
	bubble(a,n);
	printf("%s",a);
}
