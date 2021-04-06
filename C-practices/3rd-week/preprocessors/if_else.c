#include <stdio.h>
#define A 0
#define B 0
int main(void) {

	/* 	#if, normal if yapısı gibidir. 
		Kullanımı : #if (koşul)
	*/
	#if A && B
	printf("and calisiyor");
	/* 	#elif, normal else if yapısı gibidir.
		Kullanımı : #elif (kosul)
	*/
	#elif A ^ B
	printf("xor calisiyor!");
	/* #else de normal else yapısı gibidir. */
	#else 
	printf("ikisi de calismiyor");
	#endif
	return 0;
}