#include <stdio.h>

int main(void)
{
	int sayi;
	scanf("%d", &sayi);

	if (sayi < 20 || sayi > 100)
	{
		printf("Sayi tam istedigimiz gibi\n");
	}
	else
	{
		printf("Sayi 20 ile 100 arasindadir.\n");
	}
	return 0;
}
