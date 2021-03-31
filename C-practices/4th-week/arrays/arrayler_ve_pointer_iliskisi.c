#include <stdio.h>

int main(void)
{
	/* 	arraylerin elemanlarına erişmek için pointer gösterimi kullanılabilir. 	*/

	int arr[] = {2, 5, 89, 3};


	/* 	dizi[index] operatörü *(dizi + index) anlamına gelmektedir.
		dizi ile index yer değiştirebileceğinden dolayı index[dizi] kullanımı da kullanılmaktadır.
	*/
	printf("*arr: %d\n", *arr); /*	*(arr) = arr[0] */
	printf("*(arr + 2): %d\n", *(arr + 2)); /* *(arr + 2) = arr[2] */
	printf("3[arr]: %d\n", 3[arr]); /* 3[arr] = arr[3] = *(arr + 3) */

	/*	array'in ismi aslında array'in ilk elemanına işaret eden bir pointer'dır.
		bunu bir pointer'a atayabiliriz de.
	*/

	int *p = arr;

	printf("*p: %d\n", *p);

	*(p++); /*	p'yi bir blok ileriye attık. */

	printf("*p: %d\n", *p);

	return 0;
}