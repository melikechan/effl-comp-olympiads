#include <stdio.h>

int main(void)
{
	// Varsayılan girdi-çıktı
	printf("hello,world");

	// Satır atlamak için \n
	printf("Merhaba\ndunya!\n");

	// tab icin \t
	printf("Bosluk \t biraktim.\n");

	// Bir cümleyi ayırabiliriz böyle
	printf("Bakin boylelikle "
		   "ayri ayri yazi"
		   "yazdim.\n");

	// Tırnak işaretlerini yazdırmak için
	printf("Burasi \"olimpiyat\" dersi.\n");
	printf("Burasi \'olimpiyat\' dersi.\n");

	return 0;
}