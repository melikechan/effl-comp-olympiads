#include <stdio.h>

int main(void)
{
	int sayi;
	scanf("%d", &sayi);

	if (sayi >= 100 && sayi <= 140)
	{
		printf("Sayi 100 ile 140 arasindadir.\n");
	}
	else
	{
		printf("Sayi bu aralik icerisine dahil degildir.\n");
	}
	return 0;
}
