#include <stdio.h>


void merhaba_dunya(int n) {
	/* Fonksiyonlar şöyle tanımlanır:
		dondurdugu_deger_tipi fonksiyon_adi(varsa parametrenin_deger_tipi parametre_adi){
			...
			(fonksiyon bir şey döndürüyorsa/void değilse return dondurulen_deger;)
		}
		parametremizde void varsa argüman almaz.
	*/
	for (int i = 0; i < n; i++) {
		printf("merhaba dunya!\n");
	}
}

int toplama(int sayi1, int sayi2) {
	/* Fonksiyonumuz iki integer alıp onların toplamını döndürmektedir. */
	return sayi1 + sayi2;
}

int main(void)
{
	/*	Fonksiyonlar, bir işi başka başka yerlerde birden fazla kez yapmamızı sağlar.
		Fonksiyonlar, kodun okunabilirliğini ve geri kullanılabilirliğini arttırır.
		Main fonksiyonu, aksi belirtilmediği sürece, başlangıç noktasıdır.
	*/
	merhaba_dunya(10);
	return 0;
}