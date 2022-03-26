#include <stdio.h>
#include <stdlib.h>

int main() {
	
 char Ad[10],Soyad[10],Yas[2],Sehir[13],Meslek[10];
 
 printf("Adiniz: ");
 scanf("%s",Ad);
 
 printf("Soyadiniz: ");
 scanf("%s",Soyad);
 
 printf("Yasiniz: ");
 scanf("%s",Yas);
 
 printf("Sehriniz: ");
 scanf("%s",Sehir);
 
 printf("Mesleginiz:");
 scanf("%s",Meslek);
 
 printf("\n");
 
 printf("Adi: %s\n",Ad);
 printf("Soyadi: %s\n",Soyad);
 printf("Yasi: %s\n",Yas);
 printf("Sehri: %s\n",Sehir);
 printf("Meslegi: %s\n",Meslek);
 
	return 0;
}
