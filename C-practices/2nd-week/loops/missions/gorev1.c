#include <stdio.h>

int main(void)
{
	int sayi;
	printf("Dik ucgenin bir kenarini giriniz: ");
	scanf("%d", &sayi);

	for (int i = 0; i < sayi; i++)
	{
		for (int j = sayi; j > i; j--)
		{
			printf("*");
		}

		printf("\n");
	}
	return 0;
}