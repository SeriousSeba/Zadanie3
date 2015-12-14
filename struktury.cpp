#include <stdio.h>
enum kolor{bialy,czarny,pedalski};
struct daty{
	int dzien,miesiac,rok;
};
struct termin{
	struct daty data1,data2,data3,data4,data5,data6,data7,data8,data9,data10;
};
struct osobowy{
	char marka[15],naped[15];
	int drzwi;
	kolor kolor;
	int cena;
	struct termin termin;
};
struct ciezarowy{
	char marka[15];
	int ladownosc,osie,dlugosc,cena;
	struct termin termin;
};
struct autobus{
	char marka[15];
	int miejsca,dlugosc,cena;
	struct termin termin;
};
struct  tabela{
	struct osobowy o;
	struct ciezarowy c;
	struct autobus a;
};
int main(){
	tabela tab[3];
	printf("Podaj marke\n");
	scanf("%s",&tab[0].o.marka);
	printf("Podaj naped\n");
	scanf("%s",&tab[0].o.naped);
	printf("Podaj liczbe drzwi\n");
	scanf("%d",&tab[0].o.drzwi);
	printf("Podaj kolor\n");
	scanf("%s",&tab[0].o.kolor);
	printf("Podaj cene\n");
	scanf("%d",&tab[0].o.cena);
	printf("Podaj terminy przegladow\n");
	scanf("%d%d%d",&tab[0].o.termin.data1.dzien,&tab[0].o.termin.data1.miesiac,&tab[0].o.termin.data1.rok);
	printf("Marka:%s\n",tab[0].o.marka);
	printf("Naped:%s\n",tab[0].o.naped);
	printf("Liczba drzwi:%d\n",tab[0].o.drzwi);
	printf("Cena:%d\n",tab[0].o.cena);
	printf("Kolor:%s\n",tab[0].o.kolor);
	printf("Termin1:%d:%d:%d\n",tab[0].o.termin.data1.dzien,tab[0].o.termin.data1.miesiac,tab[0].o.termin.data1.rok);
	}
	
