#include <stdio.h>

int main(void)
{
	/* 	C programlama dilinde çok boyutlu arraylere yer verilir.
		Kullanımı ise çok basit.
		veri_tipi dizi_adı[1.boyut][2.boyut][3.boyut]...[N.boyut];
	*/

	/*	Çok boyutlu arraylerden en çok kullanılanı 2 boyutlu arraylerdir. */

	int iki_boyutlu[2][3] = {{1, 23, 34}, {34, 0, 22}};
	/*	2 (satır), 3 (sütun) sayısı olmak üzere bir array oluşturduk. */

	/* Bu array'i {1, 23, 34, 34, 0, 22} şeklinde de yazabilirdik ama kafaları karıştırırdı. */

	iki_boyutlu[1][0] = 32;

	printf("[1][0]: %d\n", iki_boyutlu[1][0]);
	/* iki boyutlu arraylerin içine erişmek için isim[satir][sutun] da kullanırız.*/

	printf("[1][2]: %d\n", *(*(iki_boyutlu + 1) + 2));
	/*  Alternatif olarak *(*(isim + satir) + sutun) da kullanabiliriz. */
	return 0;
}