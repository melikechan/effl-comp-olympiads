#include <stdio.h>

int main(void)
{
	int cikolata, verilen;

	printf("Cikolata sayisini yaziniz: ");
	scanf("%d", &cikolata);

	printf("Verilen sayisini yaziniz: ");
	scanf("%d", &verilen);

	if (verilen > cikolata)
	{
		printf("verilen cikolata cikolata sayisindan buyuk olamaz");
	}
	else
	{
		printf("%d", cikolata - verilen);
	}
}
