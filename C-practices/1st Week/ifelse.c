#include <stdio.h> 

int main(void) {
  int girilen;
  scanf("%d", &girilen);

  if (girilen != 21) {
    printf("21'e esit degildir");
  }

  return 0;
}