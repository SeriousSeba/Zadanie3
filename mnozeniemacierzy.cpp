#include <stdio.h>
int main(){
	int tab[32][32],tab2[32][32],tab3[32][32];
	int dl,szr,szr2,i,j,z,l;
	printf("Podaj dlugosc macierzy 1\n");
	scanf("%d",&dl);
	printf("Podaj szerokosc macierzy 1\n");
	scanf("%d",&szr);
	printf("Podaj szerokosc macierzy 2\n");
	scanf("%d",&szr2);
	printf("Wypisz liczby macierzy 1 idac po wersach\n");
	for (i=0;i<dl;i++)
		for(j=0;j<szr;j++)
		scanf("%d",&tab[i][j]);
		for (i=0;i<dl;i++){		
			for(j=0;j<szr;j++)
				printf("|%d|",tab[i][j]);
			printf("\n");}
	printf("Wypisz liczby macierzy 2 idac po wersach\n");
	for (i=0;i<szr;i++)
		for(j=0;j<szr2;j++)
		scanf("%d",&tab2[i][j]);
		for (i=0;i<szr;i++){		
			for(j=0;j<szr2;j++)
				printf("|%d|",tab2[i][j]);
			printf("\n");}
	for(i=0;i<dl;i++)
		for(j=0;j<szr2;j++){
			l=0;tab3[i][j]=0;
			for(z=0;z<szr;z++){
				l=tab[i][z]*tab2[z][j];
				tab3[i][j]=tab3[i][j]+l;}
			}	
		for (i=0;i<dl;i++){		
			for(j=0;j<szr2;j++)
				printf("|%d|",tab3[i][j]);
			printf("\n");}
		
		
		
}
