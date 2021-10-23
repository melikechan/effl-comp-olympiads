#include <stdio.h>

int main(void)
{
	/* Escape karakterleri, çıktıda bazı özel işlemleri yapmayı sağlar. */

	/* Alarm ya da bipleme için \a */
	printf("Dikkat!\a\n");

	/* Bir karakter geri gitmek için \b (backspace)*/
	printf("Merhaba\b dunya!\n");

	/* Imleci ekranın başına getirmek için \r */
	printf("Bak\rbasa dondu!\n");

	/* Dikey bir hareket için \v */
	printf("Dikey bir\v bosluk biraktim!!\n");

	/* Eğik çizgi yazdırmak için iki tane koymak gerekir. */
	printf("\\'ye bir seyler ekleyerek ozel karakterleri yazdirabiliriz.\n");

	/* Soru işareti yazdırmak için alternatif */
	printf("Oyleyse boyle midir\?\?\?\n");
	printf("Oyleyse boyle midir???\n");

	printf("Press any key to continue...");
	getchar();
	return 0;
}
