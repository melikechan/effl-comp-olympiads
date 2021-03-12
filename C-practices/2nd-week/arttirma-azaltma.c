#include <stdio.h>

int main(void)
{
	/* degisken++ önce değişkenin değerini alır, kullanır, sonra da arttırır. */

	int a = 0, b;

	printf("a: %d\n", a);

	b = a++; /* once b, a'ya eşit olur, sonra da a'nın değeri bir artar. */

	printf("b: %d\n", b);
	printf("a: %d\n", a);

	/* ++degisken önce değişkenin değerini arttırır, sonra alır, kullanır. */

	a = 0;

	printf("a: %d\n", a);

	b = ++a; /* once b, a'ya eşit olur, sonra da a'nın değeri bir artar. */

	printf("b: %d\n", b);
	printf("a: %d\n", a);

	return 0;
}