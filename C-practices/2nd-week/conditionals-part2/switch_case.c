#include <stdio.h>

int main(void)
{
	/* Switch-case, alternatif bir koşullama yöntemidir.
       Mesela bazı sabit durumlarda programımızın bir şey yapmasını istiyorsak kullanabiliriz.
        bu sabit durumlar harici durumlarda da default kullanabiliriz.
    */

	int i = 8;

	switch (i)
	{
	case 4:
		printf("4\n");
		break;
	case 5:
		printf("5\n");
		break;
	case 7:
		printf("7\n");
		break;
	case 8:
		printf("8\n");
		break;
	default:
		printf("disinda\n");
		break;
	}

	/*
       ** DİKKAT EDİLMESİ GEREKENLER: **
    */

	/* Case'lerden sonra eğer birden fazla değerin aynı işlemi yapmasını
		istiyorsak break koymayabiliriz fakat eğer yalnızca bir değer için
        o işlemi yaptıracaksak break koymalıyız.
		örneğin: */

	switch (i)
	{
	case 4:
		printf("4\n");
		break;
	case 5:
		printf("5\n");
		break;
	case 7:
		printf("7\n"); /* break olmadığı için
            case 7'yi de çalıştıracaktır case 8 ile*/
	case 8:
		printf("8\n");
		break;
	default:
		printf("disinda\n");
		break;
	}

	/* case bloğu'nun altındaki case altında olmayan satırlar çalıştırılmaz. */
	switch (i)
	{
		i += 1;
	case 4:
		printf("4\n");
		break;
	case 5:
		printf("5\n");
		break;
	case 7:
		printf("7\n");
		break;
	case 8:
		printf("8\n");
		break;
	case 9:
		printf("9\n");
		break;
	default:
		printf("disinda\n");
		break;
	}

	/* İki case bloğu aynı değere sahip olamaz. */
    /* switch (i)
    {
    case 8:
        printf("8\n");
        break;
    case 8:
        printf("baska durum\n");
        break;
    default:
        break;
    } */

	/* 	Case yani durumlar sabit bir değer olmalı. 
		Bir değişken (sabit olmayan) koyarsak hata verir. 
	*/

	/*switch (i)
    {
    case i + 1:
        printf("%d\n", i + 1);
        break;
    case 10:
        printf("10\n");
        break;
    default:
        printf("idk");
        break;
    }*/

	/* 	Ve bu sabit değerimiz enum (kullanıcı tanımlı değişken), 
		integer ya da char olmalıdır.
	*/
	/* switch (i)
    {
    case 1.1:
        printf("%d\n");
        break;
    case 10:
        printf("10\n");
        break;
    default:
        printf("idk");
        break;
    } */
	
	return 0;
}
