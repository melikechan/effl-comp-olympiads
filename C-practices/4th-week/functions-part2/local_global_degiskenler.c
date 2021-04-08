#include <stdio.h>

/*	Global değişkenler, bir bloğun dışında tanımlanan değişkenlerdir. 
	External (yani dışa dönük) çalışırlar.
*/
int b; /*  global değişken tanımı  */
int c = 40;

void atama() {
	b = 40;
}

int main (void) {
	/* 	Yerel değişkenler, bir bloğun içerisinde tanımlanır. 
		Fonksiyon, aynı isimli bir global değişken varsa yerelini kullanır. 
	*/
	
	/*	yerel değişken tanımı	*/

	int a = 20; 
	int c;

	c = 20; /*	değer atama  */

	atama();
	printf ("a: %d b:%d c: %d\n", a, b, c);

	return 0;
}
