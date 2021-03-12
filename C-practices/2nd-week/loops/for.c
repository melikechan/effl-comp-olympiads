#include <stdio.h>

int main(void)
{
	// For döngüsü, tekrarlamalı (iterative) yapılarda kullanılan bir döngüdür.
	/* Kullanımı: 
        for(ilk değer/atama; koşul; arttırma/azaltma) {
            kodu buraya yazın...
        }
    */
	for (int i = 0; i <= 10; i++)
	{
		printf("%d ", i);
	}

	printf("\n");

	// for döngüsü, alternatif biçimlerde de yazılabilir. Üsttekini alternatif biçimlerde yazalım

	for (int i = 0;; i++)
	{
		if (i > 10)
		{
			break;
		}
		printf("%d ", i);
	}

	printf("\n");

	for (int i = 0; i <= 10;)
	{
		printf("%d ", i);
		i++;
	}

	printf("\n");

	// illa bir bir artmak zorunda da değil, iki iki, üç üç de artabilir

	for (int i = 0; i < 10; i += 2)
	{
		printf("%d ", i);
	}

	printf("\n");

	for (int i = 0; i <= 10; i += 2)
	{
		printf("%d ", i);
	}

	printf("\n");

	for (int i = 0; i <= 10; i += 3)
	{
		printf("%d ", i);
	}

	printf("\n");

	// ya da azalabilir

	for (int i = 10; i > 0; i -= 3)
	{
		printf("%d ", i);
	}

	printf("\n");

	for (int i = 10; i > 0; i -= 2)
	{
		printf("%d ", i);
	}

	printf("\n");

	for (int i = 10; i > 0; i--)
	{
		printf("%d ", i);
	}

	printf("\n");

	// Sonsuz döngü, programın koşulu her zaman ile kodun her zaman çalışmasıdır
	/*for (int i = 2; i != 0; i++)
    {
        printf("%d\n", i);
    }*/
	return 0;
}