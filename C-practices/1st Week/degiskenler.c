#include <stdio.h>

int main(void) {

    /* değişkenler, tam sayı, ondalıklı sayı, dizi, string, karakter ve benzeri olabilir.
        Örneğin bu şekilde tanımlayabilirim.
    */

    int daireYaricapi = 5;
    // integer 4 byte, short 2 byte, char 1 byte, double 8 byte şeklinde gitmektedir.

    // const, degismeyen degiskenler

    const double PI = 3.14;

    printf("Dairenin alanı: %lf \n", daireYaricapi * daireYaricapi * PI);
    return 0;
}