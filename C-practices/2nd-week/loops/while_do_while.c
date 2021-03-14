#include <stdio.h>

int main(void)
{
	/*	Döngüler, bir işi belirli bir sayıda yapan bloklardır.
		Örneğin, bir programdan on kere bir şey yazdırmasını isteyelim.
		Elle yazmaya kalkarsak bir şekilde yazabiliriz ama yüze hatta bine çıktığını düşünürsek programımız
		okunaksız hâle gelir. Fakat bir döngü yazarsak bu işlemi daha az satır sayısında yapabiliriz.
		Bunun haricinde ise programın yapılanabilirliğini arttırır. Örneğin 10 satır yazdırmasını istersek
		sadece döngüye 10 kere yazdırmasını söyleriz. 20 istersek de kolayca 20 yapabiliriz.

		Döngüler genel olarak iki kısımdan oluşur: Koşul ve yapılacak işlem.
		Koşul kısmında döngünün o koşulu sağlayıp sağlamadığı kontrol edilir.
		Yapılacak işlem kısmında ise o koşulu sağlıyor ise ne yapılacağı yazılır.
	*/
	/* while döngüsü:
		while döngüsü, önce koşulun sağlanıp sağlanmadığını kontrol ederken sonra yapılacak işlemi çalıştırır.
		Yani önce düşünür, sonra yapar. Eğer gerekli arttırıp azaltmalar verilmez ise 
		sonsuz döngüye girebilir.
		Örneğin:
	*/
	int kosul = 0;

	while (kosul < 10)
	{
		printf("kosul: %d\n", kosul);
		kosul++;
	}

	/* 	do-while döngüsü:
		do-while döngüsü, while döngüsü ile aynı biçimde çalışmaktadır. 
		Ama while döngüsünden ayıran çok önemli bir farkı vardır: Önce yapılacak işlemi çalıştırır.
		Daha sonra koşulu kontrol eder. Yani önce yapar sonra düşünür. 
		Bundan dolayı while hiç çalışmama ihtimaline sahip iken do-while en az bir kere 
		o yapılacak işlemi çalıştırır. 
	*/

	kosul = 5;

	do
	{
		printf("kosul: %d", kosul);
	} while (kosul < 5);

	return 0;
}
