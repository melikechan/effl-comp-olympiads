#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    /* Değişken dediğimiz şey, birden fazla kez kullanacağımız değerleri tutmaya yarar.
       Bu değerler tam sayı, harf, ondalıklı sayı, dizi vb. olabilir.
    */
    // Örneğin, tanımlamak için şöyle yaparız:
    // değer türü, değişken adı, (varsa) değeri
    int daireYaricapi = 5;
    float daireYaricapi2;
    scanf("%f", &daireYaricapi2);

    // Her değişkenin kapladığı bir yer vardır.
    /*Unsigned değişkenler, pozitiftir (fakat 0 dahil). Eğer sonuç negatif ise o değerin maksimum değeri + 1 + sayi (negatif olur)
      Maksimum değerler ise 2^(kapladığı alan (bit)) - 1 şeklinde alınabilir
      (-1 olmasının nedeni sıfırı da dahil etmemizdir.)
      Örneğin char değişkeni 8 bit yer kaplar. Yani, unsigned olarak maksimum 2^8 - 1 (255) alabilir.
     */
    /* Signed yani işareti bulunan değişkenlerde maksimum değer 2^(kapladığı alan (bit) - 1) - 1 olabilir.
       Örneğin char değişkeni 8 bit yer kaplar. Yani, signed olarak maksimum 2^7 - 1 (127) alabilir.
       (-1 olmasının nedeni sıfırı da dahil etmemizdir.)
       Minimum değer ise -2^(kapladığı alan (bit) - 1) olabilir.
      Örneğin char değişkeni 8 bit yer kaplar. Yani, signed olarak minimum -2^7 (-128) alabilir.
    */
    printf("\nDegisken turu:\t Boyut:\t\t Minimum deger:\t\t Maximum deger:\t\t Aciklama:\t\t\n");
    printf("--------------------------------------------------------------------------------------------\n");
    printf("char\t\t%d\t\t%d\t\t\t%d\t\t\tKarakterleri ifade etmek icin kullanilir.\n", 
    sizeof(char), CHAR_MIN, CHAR_MAX);
    printf("unsigned char\t%d\t\t%d\t\t\t%d\t\t\tKarakterleri ifade etmek icin kullanilir."
    "\n\t\t\t\t\t\t\t\t\t\tFakat dogal sayidir.\n",
    sizeof(unsigned char), 0, UCHAR_MAX);
    printf("short\t\t%d\t\t%d\t\t\t%d\t\t\tKucuk tam sayilari ifade etmek icin kullanilir.\n",
    sizeof(short), SHRT_MIN, SHRT_MAX);
    printf("unsigned short  %d\t\t%d\t\t\t%d\t\t\tKucuk dogal sayilari ifade etmek icin kullanilir.\n",
    sizeof(unsigned short), 0, USHRT_MAX);
    printf("int\t\t%d\t\t%d\t\t%d\t\tTam sayilari ifade etmek icin kullanilir.\n",
    sizeof(int), INT_MIN, INT_MAX);
    printf("unsigned int\t%d\t\t%d\t\t\t%lld\t\tDogal sayilari ifade etmek icin kullanilir.\n",
    sizeof(unsigned int), 0, UINT_MAX);
    printf("long\t\t%d\t\t%d\t\t%ld\t\t32 bit'e cikabilen tam sayilar icin kullanilir.\n",
    sizeof(long), LONG_MIN, LONG_MAX);
    printf("unsigned long\t%d\t\t%d\t\t\t%lld\t\t32 bit'e cikabilen dogal sayilar icin kullanilir.\n",
    sizeof(unsigned long), 0, ULONG_MAX);
    printf("long long\t%d\t\t%lld\t%lld\tBuyuk tam sayilari ifade etmek icin kullanilir.\n",
    sizeof(long long), LLONG_MIN, LLONG_MAX);
    printf("unsigned ll\t%d\t\t%d\t\t\t%llu\tBuyuk dogal sayilari ifade etmek icin kullanilir.\n",
    sizeof(unsigned long long), 0, ULLONG_MAX);
    printf("float\t\t%d\t\t%.0f\t\t\t%.0f\t\t\nOndalikli sayilari ifade etmek icin kullanilir.\n",
    sizeof(float), FLT_MIN, FLT_MAX);
    printf("double\t\t%d\t\t%.lf\t\t\t%.0lf\t\t\nDaha kesin ondalikli sayilari ifade etmek icin kullanilir.\n",
    sizeof(int), DBL_MIN, DBL_MAX);
}