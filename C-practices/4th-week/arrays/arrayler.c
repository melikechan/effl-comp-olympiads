#include <stdio.h>

int main(void) {
	/* 	Şimdi birden fazla değişken tanımlamamız gerekti, 100 belki de 1000 tane.
		Bu değişkenleri teker teker tanımlamak kodun okunabilirliğini azaltır. 
		Ve bizim bir yapı kullanmamız gerekir: arrayler!

		Arrayler yani diziler, sabit boyutlu bir veri yapısıdır.

		Ve şöyle tanımlanır: veri_tipi dizinin_adi[dizinin_boyutu] (varsa = {ilk değerler});
	*/

	int dizi[100]; /* mesela 100 integerdan oluşan bir dizi tanımladık. */
	
	/* dizilerde elemanlar 0. indiden başlar, dizi_boyutu -  1. indide son bulur. */

	dizi[0] = 34; /* 1. elemanımızı (0. indi) 34 yaptık. */

	dizi[8] = 12; /* 9. elemanımızı (8. indi) 12 yaptık. */

	printf("1. eleman: %d\n", dizi[0]);
	printf("9. eleman: %d\n", dizi[8]);

	/* dizilere ilk değer tanımlanmadıkça değerler rastgeledir. */

	printf("2. eleman: %d\n", dizi[1]);

	/* eğer ilk değer vereceksek boyutu girmemize gerek yok. eğer ilk değer vermeyeceksek boyutu girmemiz gerekir. */
	int ilk[] = {2, 4, 123, 34};

	printf("ilk'in boyutu: %d\n", sizeof(ilk)/sizeof(int));
	return 0;
}