#include <stdio.h>

int main (void) {
	/* 	NULL pointerlar, değer olarak NULL alırlar. 
		Bu pointerın değerindeki adrese programlar erişemezler. 
	*/

	int *ptr = NULL;

	printf("adres: %p", ptr); /* 0 verecektir. */
	return 0;
}
