#include <stdio.h>

int main(void)
{
	/* 	pointerların değeri adres olduğu için başka bir tipten bir değeri de gösterebilirler.
		ne de olsa bitler bizim için önemli. 
	*/
	int a = 1025;
	int *p = &a;

	printf("int'in boyutu: %d\n", sizeof(int));
	printf("p'nin gosterdigi deger: %d\n", *p);

	char *c;	/* c, a'nın adresini alıyor 
				ama bir byte olduğu için ilk 8 biti değeri olarak alacak. 
				*/
	c = &a;

	printf("char'in boyutu: %d\n", sizeof(char));
	printf("c'in gosterdigi deger: %d\n", *c);

	/* 	bu tip kullanımlar yerine bir kavramımız var: void pointer.
		void pointer, bir tip tanımlaması (int, char gibi) olmadan tanımlanan pointerdır.
		void pointer, herhangi bir tipe dönüştürülebilir. (int*, char* gibi.).
	*/

	char d;

	void *ptr = &a;

	printf("ptr: %d\n", ptr);

	/* 	not: dereferencing işlemi, void pointerlar ile biraz sıkıntılıdır. 
		çünkü void pointerlar herhangi bir tip tanımlamasına sahip değildir.
		eğer bir pointer'ın değerini göstermek istiyorsak başka bir tipteki pointer'a çevirmek gerekir.
		yani *ptr şeklinde bir kullanım yanlıştır.
	*/
	printf("ptr'nin int tipine cevrildiginde gosterdigi deger: %d\n", *(int *)ptr);
	printf("ptr'nin char tipine cevrildiginde gosterdigi deger: %d\n", *(char *)ptr);

	ptr = &d;

	printf("ptr: %d\n", ptr);

	printf("ptr'nin int tipine cevrildiginde gosterdigi deger: %d\n", *(int *)ptr);
	printf("ptr'nin char tipine cevrildiginde gosterdigi deger: %d\n", *(char *)ptr);


	/* başka bir tipe çevirme işlemi, eşitliklerde de kullanılabilir. */

	int *iptr = ptr;
	char *cptr = ptr;

	printf("iptr: %d\n", *iptr); /* bu *(int *)ptr ile aynı anlama geldi. */
	printf("cptr: %d\n", *cptr); /* bu da *(char *)ptr ile aynı anlama geldi. */
	return 0;
}