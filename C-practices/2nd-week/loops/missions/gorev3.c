#include <stdio.h>

int main(void)
{
	int sayi, yeni_sayi = 0;
	printf("Basamaklarinin ters cevrilmesini istediginiz sayiyi giriniz: ");

	scanf("%d", &sayi);

	while (sayi)
	{
		yeni_sayi *= 10;
		yeni_sayi += sayi % 10;
		sayi /= 10;
	}

	printf("Yeni sayi = %d", yeni_sayi);
	return 0;
}