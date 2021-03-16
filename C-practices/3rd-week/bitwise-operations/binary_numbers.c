#include <stdio.h>

int main(void)
{
	/* Bilgisayarda sayıları hangi tabanla yazsanız bile bilgisayar onları ikilik tabana,
       yani 0 ve 1'lere çevirir.
        Örneğin 10'luk tabanda bir sayıyı ele alalım: 72
        72'yi hiçbir kalan kalmayıncaya kadar ikiye bölelim:
        72 / 2 = 36 (kalan 0)
        36 / 2 = 18 (kalan 0)
        18 / 2 = 9 (kalan 0)
        9 / 2 = 4 (alan 1)
        4 / 2 = 2 (kalan 0)
        2 / 2 = 1 (kalan 0)
        1 / 2 = 0 (kalan 1)
        Yani, 72'yi ikilik tabanda son kalanı en başa (sondan başa) koyarak şöyle yazarız:
        1001000

        Bir tane de tek sayı ele alalım: 5
		5'i hiçbir kalan kalmayıncaya kadar ikiye bölelim:
		5 / 2 = 2 (kalan 1)
		2 / 2 = 1 (kalan 0)
		1 / 2 = 0 (kalan 1)
		Yani, 5'i ikilik tabanda önceki örnekte olduğu gibi şöyle yazarız:
		101
        */
	return 0;
}
