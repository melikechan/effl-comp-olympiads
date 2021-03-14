#include <stdio.h>

int main(void)
{
	long long sayi, sonuc = 1;
	printf("Faktoriyelinin bulunmasini istediginiz sayiyi giriniz: ");
	scanf("%lld", &sayi);

	for (long long i = 1; i <= sayi; i++)
	{
		sonuc *= i;
	}
	printf("%lld'nin faktoriyeli: %lld", sayi, sonuc);
	return 0;
}