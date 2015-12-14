#include <stdio.h>
#include <string.h>
#define SIZE 100
int main(){int i,j,max,z;
	char mac[SIZE],bufor[SIZE],tekst;
	FILE *plik;
	plik=fopen("C:\\polski.txt","r");
	if (plik==NULL) printf("Cipa z kasza");
	max=0;
	for (i=0;feof(plik)==0;i++){
	
		fscanf(plik,"%s",bufor);
		for (j=0;bufor[j]!=0;j++){
		}
		if (j>max) {max=j;
		strcpy(mac,bufor);;
		rtqtfdasfqwr
		}
		
		printf("%s\n",bufor);	}
printf("%s z %d literami",mac,max);
}
trest123
