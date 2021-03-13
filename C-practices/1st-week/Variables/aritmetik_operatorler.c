#include <stdio.h>

int main(void)
{
	int a = 45, b = 20;
	/*
		İşlemler:
			+ -> toplama operatörü
			- -> çıkarma operatörü
			* -> çarpma operatörü
			/ -> bölme operatörü
			% -> modül operatörü (bir sayıyla bölümünden kalanı buldurmaya yarar)
		Atama:
			=        -> bir sayıyı bir değişkene atamaya yarar
			(+-/*%)= -> sağdaki değeri soldaki değer ile işleme sokar
						yani, değişkenimiz d, işlem yapılan da i olmak üzere:
			d += i -> d = d + i
			d -= i -> d = d - i
			d *= i -> d = d * i
			d /= i -> d = d / i
			d %= i -> d = d % i
	*/
	printf("%d\n", a + b);
	printf("%d\n", a - b);
	printf("%d\n", a * b);
	printf("%d\n", a / b);
	printf("%d\n", a % b);

	/* a ile b'yi toplayıp sonucu a'ya atar. */
	a += b;
	printf("%d\n", a);

	a = 45;

	/* a'dan b'yi çıkarıp sonucu a'ya atar. */
	a -= b;
	printf("%d\n", a);

	a = 45;

	/* a ile b'yi çarpıp sonucu a'ya atar. */
	a *= b;
	printf("%d\n", a);

	a = 45;

	/* a'yı b'ye bölüp sonucu a'ya atar. */
	a /= b;
	printf("%d\n", a);

	a = 45;
	a %= b;
	printf("%d\n", a);
	return 0;
}
