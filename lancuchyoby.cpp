#include <stdio.h>
int bubble(char tab[5][10],int n){
	int i,j,x,y,z,c;
	char temp[10];
	printf("cipa1");
	for(i=0;i<n;i++){
		printf("cipa2");
		for(j=0;j<n-i-1;j++){
			printf("cipa3");
			if(tab[j][0]>tab[j+1][0]){
					printf("cipa4");
					for(x=0;x<10;x++)
						temp[x]=tab[j][x];
					printf("%s-cipa5",temp);
					for(y=0;y<10;y++)
						tab[j][y]=tab[j+1][y];
					for(z=0;z<10;z++)
						tab[j+1][z]=temp[z];
									}
			if(tab[j][0]==tab[j+1][0]){
				for(z=0;tab[j][z]==tab[j+1][z];z++){}
				if (tab[j][z]>tab[j+1][z]){
					for(x=0;x<10;x++)
						temp[x]=tab[j][x];
					for(y=0;y<10;y++)
						tab[j][y]=tab[j+1][y];
					for(c=0;c<10;c++)
						tab[j+1][c]=temp[c];
				} 
		
			
			}
		}
	}
}
int main(){
	int i,j;
	char tab[5][10],temp[10];
	for (i=0;i<5;i++)
		scanf("%s",&tab[i]);
		bubble(tab,5);
		
	for( i=0;i<5;i++){
	
		for(j=0;tab[i][j]!=0;j++)
			printf("%c",tab[i][j]);
		printf("\n");
}
//	printf("%s",temp);
}//
