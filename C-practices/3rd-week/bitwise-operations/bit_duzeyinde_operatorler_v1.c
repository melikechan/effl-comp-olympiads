#include <stdio.h>

int main(void)
{
	/* 	<< operatörü, bütün bitleri istenilen kez sola kaydırır.
		Örneğin: 12 sayısı (1100)'na iki kez kaydırma uygularsak (1100) -> (11000) -> (110000) yani 48
		olur.
	*/

	int a = 12;
	printf("%d\n", a);
	printf("%d\n", a << 2);
	printf("%d\n", a);

	/* 	<<= operatörü de aynı işlemi yapar fakat (operatör)= işlemlerinde olduğu gibi sağa kaydırmadan gelen
	sonucu değişkene atar. */

	a <<= 2;
	printf("%d\n", a);

	/* 	>> operatörü bütün bitleri istenilen kez sağa kaydırır.
		Örneğin: 19 sayısına (10011) sayısına bir kez kaydırma uygularsak (1001) yani 9 olur. 
	*/

	a = 19;

	printf("%d\n", a);
	printf("%d\n", a >> 1);
	printf("%d\n", a);

	/* 	>>= operatörü de aynı işlemi yapar fakat (operatör)= işlemlerinde 
	olduğu gibi sağa kaydırmadan gelen sonucu değişkene atar. */

	a >>= 1;
	printf("%d\n", a);

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

	printf("%d\n", a & b);
	b = 24;
	printf("%d\n", a | b);
	b = 26;
	printf("%d\n", a ^ b);
	
	/* (~) bit düzeyinde NOT operatörü ise bir sayıdaki bitleri tersine çevirir. */
	return 0;
}