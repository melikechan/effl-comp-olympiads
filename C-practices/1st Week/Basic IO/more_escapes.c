#include <stdio.h>

int main(void) {
    // Escape karakterler, çıktıda bazı özel işlemleri yapmayı sağlar

    // alarm ya da bipleme için \a

	  printf("Dikkat!\a\n");

	  // backspace için \b
	  printf("Merhaba\b dunya!\n");

	  // imleci ekranın başına getirmek için \r
	  printf("Bak\rbasa dondu!\n");

	  // dikey bir hareket icin \v
	  printf("Dikey bir\v bosluk biraktim!!\n");

	  // Eğik çizgi yazdırmak için
	  printf("\\'ye bir seyler ekleyerek ozel karakterleri yazdirabiliriz.\n");

	  // Soru işareti yazdırmak için alternatif
	  printf("Oyleyse boyle midir\?\n");

    return 0;
}