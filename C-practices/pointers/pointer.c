#include <stdio.h>

int main(void) {
	/*	Pointerlar değeri adres olan değişkenlerdir. Aslında fazlası değildir ama alışkanlıklar diyelim.
		Pointerların tuttuğu değere erişmek, yani o adresteki değerin ne olduğunu almak için de 
		yıldız operatörü kullanılır.
		
		Örneğin şöyle bir tanım verilsin:
		int sayi = 50;
		int *degisken = &sayi; (sayi 2540'ta tutuluyor olsun)
		mesela degisken'i yıldız operatörsüz şekilde istediğimiz zaman bize 2540'ı verecektir.
		Çünkü, pointerlar değer olarak adres tutarlar.
		Fakat, degisken'i yıldız operatörlü şekilde istediğimiz zaman da bize 50 verecektir.
		Çünkü, pointerın işaret ettiği adresteki değere bakmak için yıldız operatörü gerekmektedir.
	*/
	int sayi = 50;
	int *pointer = &sayi;

	printf("pointer'in adresi: %p\n", &pointer);
	printf("sayi'nin adresi: %p\n", &sayi);
	printf("pointer'in degeri: %p\n", pointer);
	printf("pointer'in gosterdigi deger: %d\n", *pointer);


	/* çoklu pointerlar, değer olarak bir alt derecedeki pointerın adresini alırlar.*/

	int **doubleptr = &pointer;

	printf("doubleptr'nin adresi: %p\n", &doubleptr);
	printf("doubleptr'nin degeri: %p\n", doubleptr);
	printf("doubleptr'nin ilk pointer ile gosterdigi deger: %p\n", *doubleptr);
	printf("doubleptr'nin ikinci pointer ile gosterdigi deger: %d\n", **doubleptr);
	return 0;
}