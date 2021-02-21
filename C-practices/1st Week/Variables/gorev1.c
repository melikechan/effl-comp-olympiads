#include <stdio.h>

int main(void) {
  int elma, armut, muz, toplam;
  printf("Elmanin fiyati: ");
  scanf("%d", &elma);
  printf("Armudun fiyati: ");
  scanf("%d", &armut);
  printf("Muzun fiyati: ");
  scanf("%d", &muz);

  toplam = elma + armut + muz;
  printf("Toplam fiyat: %d", toplam);
}