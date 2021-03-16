#include <stdio.h>

int main(void)
{
	double sayi1, sayi2;
	int islem;

	printf("Birinci sayiyi giriniz: ");
	scanf("%lf", &sayi1);

	printf("Ikinci sayiyi giriniz: ");
	scanf("%lf", &sayi2);

	printf("Yapilacak islemi giriniz.\n");
	printf("1 -> toplama 2 -> cikarma\n");
	printf("3 -> carpma 4 -> bolme\n");
	printf("5 -> modul alma: ");
	scanf("%d", &islem);

	switch (islem)
	{
	case 1:
		printf("%lf + %lf = %lf", sayi1, sayi2, sayi1 + sayi2);
		break;
	case 2:
		printf("%lf - %lf = %lf", sayi1, sayi2, sayi1 - sayi2);
		break;
	case 3:
		printf("%lf * %lf = %lf", sayi1, sayi2, sayi1 * sayi2);
		break;
	case 4:
		while (sayi2 == 0)
		{
			printf("ikinci sayi sifir olamaz. baska bir sayi giriniz: ");
			scanf("%lf", &sayi2);
		}
		printf("%lf / %lf = %lf", sayi1, sayi2, sayi1 / sayi2);
		break;
	case 5:
		printf("%d \% %d = %d", (int)sayi1, (int)sayi2, (int)sayi1 % (int)sayi2);

		break;
	default:
		printf("Gecersiz bir islem girdiniz.\n");
		break;
	}

	printf("\nCikmak icin ENTER tusuna basiniz...");
	getchar();
	return 0;
}