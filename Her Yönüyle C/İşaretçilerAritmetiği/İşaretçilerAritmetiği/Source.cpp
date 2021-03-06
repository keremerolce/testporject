#include <stdio.h>

int main()
{
	//çeşitli tiplerde 3 adet değişken tanımlayalım

	int tamsayi=15;
	double ondaliksayi=20.2;
	char karakter='c';

	//her bir tip için işaretçi tanımlayalım

	int *intptr;
	double *doubleptr;
	char *charptr;

	//işaretçilere değişkenlerin adresini atayalım

	intptr=&tamsayi;
	doubleptr=&ondaliksayi;
	charptr=&karakter;

	//atama işlemi sonrası işaretçilerde tutulan adresleri ekrana yazdıralım
	printf("int isaretcisinin degeri: %p\n",intptr);
	printf("double isaretcisinin degeri: %p\n",doubleptr);
	printf("char isaretcisinin degeri: %p\n",charptr);
	printf("-----------------------------------------\n");


	//işaretçilerini arttırarak ne kadar arttığını görelim
	intptr++;
	doubleptr++;
	charptr++;

	//Arttırmadan sonra değişmelere bakalım
	printf("int isaretcisinin degeri: %p\n",intptr);
	printf("double isaretcisinin degeri: %p\n",doubleptr);
	printf("char isaretcisinin degeri: %p\n",charptr);


	return 0;
}