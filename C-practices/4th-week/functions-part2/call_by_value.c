#include <stdio.h>

void degistir_ptr(int *num)
{
	*num = 20;
}

void degistir(int num)
{
	num = 20;
}

int main(void)
{
	int a = 50;
	int b = 60;

	printf("A: %d\n", a);
	degistir_ptr(&a);
	printf("A'yi arttiriyoruz: %d\n", a);

	printf("B: %d\n", b);
	degistir(b);
	printf("B'yi arttirmayi deniyoruz: %d\n", b);
	return 0;
}