#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define rastgele() (rand()%3) // 0, 1, 2 den birini rastgele döndürür.


int main(){
    srand(time(NULL)); // rastgele sayı fonksiyonunu bilgisayarın zamanına göre ayarlar.
    //--------------------------------
    int oyun_sayisi,kazan=0,kaybet=0,araba,secim,acilan_kapı;
    scanf("%d",&oyun_sayisi);
    for (int i = 0; i < oyun_sayisi; i++)
    {
        araba = rastgele();
        secim = rastgele();
        if(secim == araba){
            int temp = rand()%2;
            acilan_kapı = (secim + temp)%3;
        }
        else{
            acilan_kapı = 3 - (araba + secim);
        }
        secim = 3 - (acilan_kapı + secim); // seçimi değiştiriyor...
        (araba == secim ? kazan++ : kaybet++);
    }
    printf("Oyun Sayisi: [%d]; Kazanilan: [%d]; Kaybedilen: [%d]",oyun_sayisi,kazan,kaybet);
    //--------------------------------
    return 0;
}