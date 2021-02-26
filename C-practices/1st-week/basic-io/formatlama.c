#include <stdio.h>

int main(void)
{
	// Formatlama dediğimiz şey, verilen değişkenleri belirli bir şekilde yazdırmaktır.

	// Tam sayıları formatlamak için kullanılır.
	printf("%i %d\n", 100, 200);

	// Floatları formatlamak için kullanılır.
	printf("%f, %e\n", 436256.56556, 394338.3894);

	// Doubleları formatlamak için kullanılır.
	printf("%lf\n", 4334837634673438348.488);

	// karakterleri formatlamak için kullanılır
	printf("%c\n", 'a');

	// kelimeleri formatlamak için kullanılır
	printf("%s\n", "guten morgen");

	// sekizlik sayıları formatlamak için kullanılır
	printf("%o\n", 8);

	// onaltılık sayıları formatlamak için kullanılır
	printf("%x\n", 15);

	// Belirli bir genişliğe sıkıştırmak için %tamsayı(format) kullanılır.
	printf("%04d %03d %02d %04d\n%20s\n%s\n", 10000, 20, 1, 2000, "good night", "good night");

	return 0;
}