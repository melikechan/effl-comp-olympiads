#include <stdio.h>

/* 	ya bir array şeklinde gönderebiliriz. aslında bu notasyon pointer biçimine çevrilir. 
	yani, bu notasyon int toplam(int *sayilar) biçimine çevrilir.
*/

int toplam(int sayilar[])
{

	int t = 0;
	int boyut = sizeof(sayilar) / sizeof(sayilar[0]);

	printf("toplam icinde boyut: %d\n", boyut);

	/* 	burada sayılar bir pointer şeklinde olduğu için istediğimiz sonucu vermeyecektir. */
	for (int i = 0; i < boyut; i++)
	{
		t += sayilar[i];
	}
	return t;
}

/* 	ama eğer boyut ile de gönderseydik bize doğru sonucu verecekti. */

int dogru_toplam(int sayilar[], int boyut)
{

	int t = 0;

	for (int i = 0; i < boyut; i++)
	{
		t += sayilar[i];
	}
	return t;
}

int main(void)
{
	/* 	Arrayleri fonksiyonlara parametre olarak da yollayabiliriz. 
		ya da döndürebiliriz. 
		Fakat bu döndürme işlemi için array tanımı yerine pointer kullanmamız gerekir.
	*/
	int arr[] = {34, 21, 67, 1, 21};
	int boyut = sizeof(arr) / sizeof(int);

	printf("array seklinde toplam: %d\n", toplam(arr));
	printf("boyut verdigimiz zaman toplam: %d\n", dogru_toplam(arr, boyut));
	return 0;
}