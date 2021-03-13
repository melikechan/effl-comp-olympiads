#include <stdio.h>

int main(void)
{
	float daire_yaricapi;
	scanf("%f", &daire_yaricapi);

	/*	Bir değişkeni anımlarken tipinden önce "const" yani "constant"
		getirilirse, o değişken bir daha değiştirilemez.
		"const" ifadesinin dışında değişken tanımında herhangi bir değişiklik
		yoktur.
		Bu şekilde tanımlanan değişkenler genellikle tamamen büyük harflerle
		adlandırılır, ancak bu bir zorunluluk değildir.
	*/
	const double PI = 3.14;

	printf("Dairenin alanı: %lf \n", daire_yaricapi * daire_yaricapi * PI);

	return 0;
}
