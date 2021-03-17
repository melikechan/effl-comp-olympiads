#include <stdio.h>

int main(void)
{
	/* 	Değişkenleri/fonksiyonların depolama şeklini belirtmek
		için 4 farklı anahtar kelimemiz vardır: auto, extern, static, register 
	*/
	/* 	Not: Değişken tanımlanırken bu kelimelerden yalnızca birisini kullanmak gerekir. 
		Diğer türlü hata verecektir.
	*/

	/* 	auto sınıfındakiler, stack'te saklanır. 
		İlk değeri rastgele (garbage value) değerdir.
		Varsayılan olarak tanımladığımız fonksiyon/değişkenler bu sınıfa dahildir.
		Yalnızca tanımlandıkları yerde (block) kullanılabilirler.
	*/
	int sayi1 = 45; /* aslında bu sayi auto int sayi1 = 45 şeklinde ifade edilmektedir. Bir farkları yoktur.*/

	/* 	register sınıfındakiler, CPU belleğinde saklanır. Bu yüzden &(adres operatörü kullanılamaz.)
		İlk değeri rastgele (garbage value) değerdir.
		Hızlı erişim için idealdir.
		Yerel scope'a sahiptir. Bir blok dışında değişken tanımlanırken register kullanılırsa hata verir.
	*/

	register int sayi2 = 32;
	printf("%d", sayi2);
	return 0;
}