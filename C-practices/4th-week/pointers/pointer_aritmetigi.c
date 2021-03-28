#include <stdio.h>

int main (void) {
	int a = 20;
	int *ptr = &a;

	printf("ptr: %p\n", ptr);
	printf("a: %d\n", a);

	ptr++; /* pointer'ı bir sonraki bloğa kaydırdık. */

	printf("ptr: %p\n", ptr);
	printf("*ptr: %d\n", *ptr);

	ptr = &a; /* pointer'ımız tekrar a'yı göstersin. */

	*ptr = 48; /* bu sefer pointer'ın gösterdiği değer ile oynuyoruz. */

	printf("*ptr: %d\n", *ptr);
	printf("a: %d\n", a); /* pointer'ımız a'yı gösteriyordu. pointer'ın değeri ile oynayınca a ile de oynamış olduk. */
	return 0;
}