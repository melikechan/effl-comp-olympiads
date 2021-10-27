#include <stdio.h>

int main(void)
{
	/* 	<< operatörü, bütün bitleri istenilen kez sola kaydırır.
		Örneğin: 12 sayısı (1100)'na iki kez kaydırma uygularsak (1100) -> (11000) -> (110000) yani 48
		olur.
	*/

	int a = 12;
	printf("a      = %d\n", a);
	printf("a << 2 = %d\n", a << 2);
	printf("a      = %d\n", a);

	/* 	<<= operatörü de aynı işlemi yapar fakat (operatör)= işlemlerinde olduğu gibi sağa kaydırmadan gelen
	sonucu değişkene atar. */

	a <<= 2;
	printf("a <<= 2; a = %d\n", a);

	/* 	>> operatörü bütün bitleri istenilen kez sağa kaydırır.
		Örneğin: 19 sayısına (10011) sayısına bir kez kaydırma uygularsak (1001) yani 9 olur.
	*/

	a = 19;

	printf("a      = %d\n", a);
	printf("a >> 1 = %d\n", a >> 1);
	printf("a      = %d\n", a);

	/* 	>>= operatörü de aynı işlemi yapar fakat (operatör)= işlemlerinde
	olduğu gibi sağa kaydırmadan gelen sonucu değişkene atar. */

	a >>= 1;
	printf("a >>= 1; a = %d\n", a);

	/* 	AND (&) operatörü de mantıktaki ve gibidir, eğer o
	basamaktaki bitler 1 ise 1 olur, herhangi birisi 0 olursa 0 olur.
	Örneğin 23 (10111) ve 20 (10100)'u & işlemine sokalım

		1 0 1 1 1
		1 0 1 0 0
	   &----------
	    1 0 1 0 0 yani 20 sayısını verir.

	OR (|) operatörü de mantıktaki veya gibidir, eğer o basamaktaki herhangi bir bit 1 ise 1 olur.
	Örneğin 23 (10111) ve 24 (11000)'u | işlemine sokalım

		1 0 1 1 1
		1 1 0 0 0
	   |----------
	    1 1 1 1 1 yani 31 sayısını verir.

	XOR (^) operatörü ise mantıktaki ya da gibidir. Eğer o basamaktaki bitler birbirinden farklı ise 1 olur.
	Örneğin 23 (10111) ve 26 (11010)'u ^ işlemine sokalım

		1 0 1 1 1
		1 1 0 1 0
	   ^----------
	    0 1 1 0 1 yani 13 sayısını verir.
	*/

	int b = 20;
	a = 23;

	printf("a = %d, b = %d, a & b = %d\n", a, b, a & b);
	b = 24;
	printf("a = %d, b = %d, a | b = %d\n", a, b, a | b);
	b = 26;
	printf("a = %d, b = %d, a ^ b = %d\n", a, b, a ^ b);

	/* (~) bit düzeyinde NOT operatörü ise bir sayıdaki bitleri tersine çevirir.
	 * 32-bit int kullandığımız için toplam 32 bit vardır, 0'lar 1 olur 1'ler 0 olur.
	 * 23  = 00000000000000000000000000010010
	 * ~23 = 11111111111111111111111111101101 = -21
	 */
	a = 20;
	printf("a = %d, ~a = %d\n", a, ~a);

	return 0;
}
