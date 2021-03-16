#include <stdio.h>
/* 	Define ön işlemci komudu, tanımlama yapmak için kullanılır.
	kullanımı: #define TANIMLANACAKDEGERADI değer
*/
#define D 12
#define A D
#define LUCKY 42
/*	 
	Define ile fonksiyonları başka bir şekilde yazabiliriz.
*/
#define yazdir printf
#define dongu(x) for (int i = 0; i < (x); i++)

/* 	Not: Ön işlemci ile verilen ifadelerin, o ifadenin açılımı yapılmadan değeri hesaplanmaz.
	Açılımı yapıldıktan sonra değeri hesaplanır.
*/
#define kare(x) x * x
#define kare2(x) (x) * (x)
#define birlestir(a, b) a##b
/* 	##, verilen değerleri birleştirir. (12, 32) verilsin, 1232 olur. */

int main(void)
{

	yazdir("%d ", A);
	yazdir("%d", D);
	yazdir("%d\n", LUCKY);
	dongu(45)
	{
		yazdir("%d ", i);
	}

	printf("\n");
	printf("%d\n", kare(6 + 6));  /* Bu ifade 6 + 6 * 6 + 6 diye açılır. Yani, 48 gelir. */
	printf("%d\n", kare2(6 + 6)); /* Bu ifade (6 + 6) * (6 + 6) diye açılır. Yani 144 gelir. */

	/* #undef ise define ile tanımlanan değerleri, ifadeleri iptal etmeye yarar. */
	return 0;
}