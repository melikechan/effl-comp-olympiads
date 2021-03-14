#include <stdio.h>

int main(void)
{
	double sayi1, sayi2;
	char islem;

	printf("Birinci sayiyi giriniz: ");
	scanf("%lf", &sayi1);

	printf("Ikinci sayiyi giriniz: ");
	scanf("%lf", &sayi2);

	printf("Yapilacak islemi giriniz.\n");
	printf("+ -> toplama - -> cikarma\n");
	printf("* -> carpma / -> bolme\n");
	printf("% -> modul alma: ");
	scanf("%c", &islem);

	switch (islem)
	{
	case '+':
		printf("%lf + %lf = %lf", sayi1, sayi2, sayi1 + sayi2);
		break;
	case '-':
		printf("%lf - %lf = %lf", sayi1, sayi2, sayi1 - sayi2);
		break;
	case '*':
		printf("%lf * %lf = %lf", sayi1, sayi2, sayi1 * sayi2);
		break;
	case '/':
		while (sayi2 == 0)
		{
			printf("ikinci sayi sifir olamaz. baska bir sayi giriniz: ");
			scanf("%lf", &sayi2);
		}
		printf("%lf / %lf = %lf", sayi1, sayi2, sayi1 / sayi2);
		break;
	case '%':
		printf("%d % %d = %d", (int)sayi1, (int)sayi2, (int)sayi1 % (int)sayi2);

		break;
	default:
		printf("Gecersiz bir islem girdiniz.\n");
		break;
	}

	printf("Cikmak icin ENTER tusuna basiniz...");
	getchar();
	return 0;
}