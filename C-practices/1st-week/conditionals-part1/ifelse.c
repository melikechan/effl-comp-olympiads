#include <stdio.h>

int main(void)
{
	int girilen;
	scanf("%d", &girilen);

	// Eğer girilen sayı 21'e eşit değil ise
	if (girilen != 21)
	{
		printf("21'e esit degildir.\n");
	}

	// Eğer girilen sayı 21'e eşit ise
	if (girilen == 21)
	{
		printf("21'e esittir.\n");
	}

	// Eğer girilen sayı 20'den küçük ise
	if (girilen < 20)
	{
		printf("20'den kucuk.\n");
	}
	// Eğer girilen sayı 20'ye büyük eşit ve 50'den küçük ise
	else if (girilen >= 20 && girilen < 50)
	{
		printf("20'den buyuk, 50'denk kucuk");
	}
	// Eğer girilen sayı 50'den büyük ise
	else
	{
		printf("50'den buyuk.");
	}
	return 0;
}