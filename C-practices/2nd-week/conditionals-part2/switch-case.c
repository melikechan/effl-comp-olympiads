#include <stdio.h>

int main(void)
{
    // Switch-case, alternatif bir koşullama yöntemidir.
    /* Mesela bazı sabit durumlarda programımızın bir şey yapmasını istiyorsak kullanabiliriz. 
        bu sabit durumlar harici durumlarda da default kullanabiliriz.
        */

       /*
       ** DİKKAT EDİLMESİ GEREKENLER: **
		* Case yani durumlar sabit bir değer olmalı. Bir değişken (sabit olmayan) koyarsak hata verir.
        Ve bu sabit değerimiz enum (kullanıcı tanımlı değişken), integer ya da char olmalıdır.
		* Case'lerden sonra eğer birden fazla değerin aynı işlemi yapmasını 
		istiyorsak break koymayabiliriz fakat eğer yalnızca bir değer için o işlemi yaptıracaksak break koymalıyız.
		örneğin: 
		case 8:
			kodumuz
			break; (eğer değerimiz 8 ise yalnızca case 8'i çalıştıracaktır)
        case 9:
            kodumuz (eğer değerimiz 9 ise case 9'da break olmadığı için 
            case 10'u da çalıştıracaktır case 9 ile)
        case 10:
            kodumuz
            break;

        * iki case bloğu aynı değere sahip olamaz.
        * case bloğu'nun altındaki case altında olmayan satırlar çalıştırılmaz.
        */
     
    return 0;
}