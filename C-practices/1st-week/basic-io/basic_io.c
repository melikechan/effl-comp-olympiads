#include <stdio.h>

int main(void)
{
	/*	Varsayılan çıktı:
			printf() fonksiyonu ekrana yazı yazmamızı sağlar.
	 		bu örnek, ekrana "hello, world!" yazdırır:
	*/
	printf("hello, world!");

	/* Satır atlamak için \n kullanılır: */
	printf("Merhaba\ndunya!\n");

	/* tab icin \t kullanılır: */
	printf("Bosluk \t biraktim.\n");

	/* Bir yazıyı şu şekilde ayırmak da mümkündür: */
	printf("Bakin boylelikle "
		   "ayri ayri yazi"
		   "yazdim.\n");

	/* Tırnak işareti yazdırabilmek için önüne bir \ koymanız gerek: */
	printf("Burasi \"olimpiyat\" dersi.\n");
	printf("Burasi \'olimpiyat\' dersi.\n");
	/* Daha fazla bu tür şeyler için more_escapes.c dosyasına bakın. */

	return 0;
}
