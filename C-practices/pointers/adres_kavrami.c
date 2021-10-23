#include <stdio.h>

int main(void)
{
	/*	Adres dediğimiz değer, bir değişkenin bellekte nerede tutulduğunu gösteren değerdir.
		Bir değişken, eğer register sınıfı kullanılmadıysa bellekte boş bir yerde saklanır.
		Bizler de bu adrese erişmek için (&) operatörünü kullanırız.
		Mesela integer tipinden bir a değişkenimiz olsun. Bu a değişkenimiz 2424'te saklansın.
		Eğer biz printf("%p", &a); yazarsak bize 2424 verecektir. Yani a değişkenimizin yerini verdi.	
	*/

	int a = 20;
	int b = 123;
	printf("a: %p\n", &a); /* %p operatörü, sistem mimarisine göre adresi formatlamak için kullanılır. */
	printf("b: %p\n", &b);
	return 0;
}