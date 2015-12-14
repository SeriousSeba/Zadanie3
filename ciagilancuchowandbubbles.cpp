#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int main(){
	int i,j,n;
	n=5;
	char temp[20],bufor[20],bufor2[20];
//		scanf("%s",&a[i]);
//	printf("%s\n",a[1]);
	char **tab = (char**) malloc(10*sizeof(char*));   // tworzymy tablice na 10 napisow
for(i = 0; i < 10; i++)
{
    tab[i] = (char*) malloc(10*sizeof(char));       // tworzymy napis maksymalnie 19 literowy - 20 znak to zawsze 0
    tab[i][0] = 0;   
}
for (i=0;i<5;i++)
	scanf("%s",&tab[i]);
	for (i=0;i<5;i++)
	printf("%s",&tab[i]);
for(i=0;i<n;i++)
	for(j=0;j<n-i-1;j++){
		if(tab[j]>tab[j+1]){
				temp==tab[j];
				tab[j]=tab[j+1];
				tab[j+1]=temp;
				}
		//if(tab[j]==tab[j+1]){
			
		}//
		for (i=0;i<5;i++)
	printf("%s",&tab[i]);
}

