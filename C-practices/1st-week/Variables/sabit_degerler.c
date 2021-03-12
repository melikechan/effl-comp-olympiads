#include <stdio.h>

int main(void)
{
    float daireYaricapi;
    scanf("%f", &daireYaricapi);

    /* Bir değişkeni anımlarken tipinden önce "const" yani "constant" 
       getirilirse, o değişken bir daha değiştirilemez.
       "const" ifadesinin dışında değişken tanımında herhangi bir değişiklik
       yoktur.
    */
    const double PI = 3.14;

    printf("Dairenin alanı: %lf \n", daireYaricapi * daireYaricapi * PI);

    return 0;
}
