#include <stdio.h>

int main(void)
{
	/* Formatlama, verilen değişkenleri belirli bir biçimde yazdırmaktır. */

	/* %d Tam sayıları formatlamak için kullanılır. */
	printf("%i %d\n", 100, 200);

	/* %f ya da %e float tipindeki değişkenleri formatlamak için kullanılır. */
	printf("%f, %e\n", 436256.56556, 394338.3894);

	/* %lf ise double tipindeki değişkenleri formatlamak için kullanılır. */
	printf("%lf\n", 4334837634673438348.488);

	/* %c karakterleri formatlamak için kullanılır. */
	printf("%c\n", 'a');

	/* %s kelimeleri formatlamak için kullanılır. */
	printf("%s\n", "guten morgen");

	/* %o sayıları sekizlik tabana göre yazdırmak/formatlamak için kullanılır. */
	printf("%o\n", 8);

	/* %x sayıları onaltılık tabana göre yazdırmak/formatlamak için kullanılır. */
	printf("%x\n", 15);

	/* 	Değişkenleri belirli bir aralığa sığdırmak için %tamsayı(format) kullanılır.
		* Eğer değişkenin basamak/karakter sayısı o eğer belirtilen 
		basamak/karakter sayısından küçükse o basamak aralığına sığdırır. 
		Eğer değişkenin basamak/karakter sayısı formatlamada kullanılan 
		basamak/karakter sayısından küçük ise hiçbir şey yapmaz, ekrana aynı şekilde yazdırır.
	*/
	printf("%04d %03d %02d %04d\n%20s\n%3s\n", 10000, 20, 1, 2000, "good night", "good night");

	/* Ondalık sayılarda noktadan sonra basamak sayısını ayarlamak için %.tamsayı(format) kullanılır.
	   * Eğer değişkenin noktadan sonraki basamak sayısı eğer o belirtilen basamak sayısından küçükse
	   o basamak sayısına tamamlamak için 0 eklenir. 
	   * Eğer değişkenin noktadan sonraki basamak sayısı belirtilen basamak sayısından küçük ise
	   belirtilen basamak sayısına yuvarlar.
	*/

	printf("%.2f, %.4f %f", 3.145, 2.5, 6.23);
	return 0;
}