#include <stdio.h>
#define DEGER 45
int main(void)
{
	/* 	ifdef, if yapısına benzerdir. Bir değişkenin tanımlı olup olmadığına bakar.
		Tanımlı ise çalışır. Tanımsız ise çalışmaz.
		ifndef de aynı şekilde tanımlı olup olmaması ile uğraşır.
		Tanımlı ise çalışmaz. Tanımsız ise çalışır
	*/

	#ifdef DEGER
	printf("deger: %d\n", DEGER);
	#else 
	#define DEGER
	#endif

	#ifndef TANIMSIZ
	#define TANIMSIZ 6
	printf("tanimsiz: %d", TANIMSIZ);
	#endif
	return 0;
}