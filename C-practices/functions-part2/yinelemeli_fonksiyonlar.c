#include <stdio.h>

/*	Faktöriyel fonksiyonunu tanımlayalım. */

int faktoriyel(int sayi) {
	if (sayi == 1 || sayi == 0) {
		return 1;
	}

	return sayi * faktoriyel(sayi - 1);
}


int main(void) {
	/*	Recursive, Türkçesiyle özyinelemeli fonksiyonlar, fonksiyon çağrısı içerisinde 
		o fonksiyonu tekrardan çağıran bir fonksiyon türüdür.
	*/


	/*	Örneğin bir faktöriyel fonksiyonu tanımlayalım. Ve çağıralım. */
	int sayi = 6;
	printf("%d'nin faktoriyeli: %d\n", sayi, faktoriyel(sayi));
	return 0;
}

