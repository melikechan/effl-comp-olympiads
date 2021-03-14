#include <stdio.h>

int main(void)
{
	/* 	goto yapısı, kodun bir yerden diğer bir yere gitmesini sağlayan etiketlerdir.
		Eğer etiket çağırılırsa, program o etiketin bulunduğu yere gidip o yerden çalışmaya devam eder.
		Fakat goto etiketi kodun okunabilirliği ve yapılanabilirliğini azattığından dolayı günlük hayatta
		pek kullanılması tercih edilmez.
	*/

	int a = 20;

baslangic:

	printf("%d\n", a);
	a++;

	if (a < 30)
		goto baslangic; /* Eğer koşulumuz sağlanıyor ise baslangic'a git. */

	int b = 40;

	if (b >= 40)
		goto bitis; /* Koşulumuz sağlanıyorsa gideceğimiz nokta. */

	b++; /* Direkt bitişe gittiği için bu blok çalışmaz. */

bitis:
	printf("Bitti!\n");
	printf("%d\n", b);

	return 0;
}
