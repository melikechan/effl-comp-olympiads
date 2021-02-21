#include <stdio.h>

int main (void) {
	float daireYaricapi;
    scanf("%f", &daireYaricapi);
	
    // const, degismeyen degiskenler
    const double PI = 3.14;

    printf("Dairenin alanı: %lf \n", daireYaricapi * daireYaricapi * PI);

	return 0;
}