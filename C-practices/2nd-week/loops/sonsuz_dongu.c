#include <stdio.h>

int main(void)
{
	/* 	Sonsuz döngü, programın koşulunun her zaman sağlanması 
		ile kodun her zaman çalışmasıdır.
	*/
	for (int i = 2; i != 0; i--)
	{
		printf("%d\n", i);
	}
	return 0;
}