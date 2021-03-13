#include <stdio.h>

int main(void)
{
	/* &&, mantıktaki adıyla ve'dir. Her ikisi de doğru ise 1, herhangi biri yanlış ise 0 olur.
        Eğer ilk ifade yanlış ise ikinci ifadeye bakılmaz, direkt 0 döndürür.

        == -> eşittir
        != -> eşit değildir
        >= -> büyük eşittir
        <= -> küçük eşittir
        > -> büyüktür
        < -> küçüktür
    */
	int sayi = 5, kosullama = 4;
	if (sayi >= 5 && sayi < 7)
	{
		printf("bu dogru\n");
	}

	if (sayi > 5 && sayi < 7)
	{
		printf("bu yanlis\n");
	}

	/* ||, mantıktaki adı ile veya'dır. Ancak her ikisi de yanlış ise 0'dır. Aksi takdirde 1'dir.
        Eğer herhangi biri doğru ise ikinci ifadeye bakılmaz, direkt 1 döndürür.
    */
	if (sayi == 5 || sayi == 7)
	{
		printf("bu dogru\n");
	}

	if (sayi != 5 || sayi == 7)
	{
		printf("bu yanlis\n");
	}

	/* !, mantıktaki adı ile değil'dir. Eğer bir ifade doğru ise 0, yanlış ise 1 döndürmesini sağlar.
        Mantıksal ifadenin başına gelir.
    */

	if (!(sayi == 5 || sayi == 7))
	{
		printf("bu yanlis\n");
	}

	if (!(sayi > 5 && sayi < 7))
	{
		printf("bu dogru\n");
	}

	/* ?: dediğimiz operatör, koşul operatörüdür. if-else ile aynı işlevi görmektedir.
        kullanımı ise (degisken =) (mantiksal_ifade) ? dogru ise deger : yanlis ise deger
    */
	sayi = (kosullama > 4) ? 8 : 6;

	printf("%d", sayi);

	sayi = (kosullama > 4) ? 8 : sayi * 6;

	printf("%d", sayi);
	return 0;
}
