#include <stdio.h>

int main(void) {
    // 1. Elma armut vb. alın marketten. Onların fiyatını verin ve toplam fiyatı yazdırın.
    // 2. Çikolatamız olsun. onları ondalıklı sayı şeklinde bölelim. 
    // İki değişken olsun, çikolata ve kişi sayısı. 
    // Onları birbirine bölüp bir değişkene atayıp (double) yazdırın.

    // 3. görevimiz: dikdörtgenin alanını bulan bir program yazın
    // 4. görevimiz: Çikolata sayısını ve arkadaşlara kaç çikolata verdiğiniz iki değişken olsun.
    // Elinizde kaç çikolara kaldığını yazdırın 

    /* değişkenler, tam sayı, ondalıklı sayı, dizi, string, karakter ve benzeri olabilir.
        Örneğin bu şekilde tanımlayabilirim.
    */

    int daireYaricapi = 5;
    // integer 4 byte, short 2 byte, char 1 byte, double 8 byte şeklinde gitmektedir.
    float daireYaricapi2;
    scanf("%f", &daireYaricapi2);
    // const, degismeyen degiskenler

    const double PI = 3.14;
    
    printf("Kullanıcı tanımlı dairenin alanı: %lf:", daireYaricapi2 * daireYaricapi2 * PI);
    printf("Dairenin alanı: %lf \n", daireYaricapi * daireYaricapi * PI);
    return 0;
}