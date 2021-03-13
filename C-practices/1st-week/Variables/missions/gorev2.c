#include <stdio.h>

int main(void)
{
	double cikolata;
	int kisi;

	printf("Cikolata sayisi:");
	scanf("%lf", &cikolata);

	printf("Kisi sayisi:");
	scanf("%d", &kisi);

	double kisiBasina = cikolata / kisi;
	printf("%lf", kisiBasina);
}
