#include <stdio.h>

int main(void)
{
	int yas;
	scanf("%d", &yas);

	// 1. seçenek
	if (yas < 0)
	{
		printf("Yas 0'dan kucuk olamaz!\n");
	}
	else if (yas < 4)
	{
		printf("Bebek\n");
	}
	else if (yas >= 4 && yas < 13)
	{
		printf("Cocuk\n");
	}
	else if (yas >= 13 && yas < 18)
	{
		printf("Genc\n");
	}
	else if (yas >= 18 && yas < 40)
	{
		printf("Yetiskin\n");
	}
	else if (yas >= 40 && yas < 65)
	{
		printf("Orta-yasli\n");
	}
	else
	{
		printf("Yasli\n");
	}

	// 2. seçenek
	if (yas < 0)
	{
		printf("Yas 0'dan kucuk olamaz!\n");
	}
	else if (yas < 4)
	{
		printf("Bebek\n");
	}
	else if (yas < 13)
	{
		printf("Cocuk\n");
	}
	else if (yas < 18)
	{
		printf("Genc\n");
	}
	else if (yas < 40)
	{
		printf("Yetiskin\n");
	}
	else if (yas < 65)
	{
		printf("Orta-yasli\n");
	}
	else
	{
		printf("Yasli\n");
	}

	return 0;
}