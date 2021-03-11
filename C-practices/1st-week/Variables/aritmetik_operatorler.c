#include <stdio.h>

int main(void)
{
    int a = 45, b = 20;
    /*
  İşlemler:
    + -> toplama operatörü
    - -> çıkarma operatörü 
    * -> çarpma operatörü
    /  -> bölme operatörü
    % -> modül operatörü (bir sayıyla bölümünden kalanı buldurmaya yarar)
  Atama:
    = -> bir sayıyı bir değişkene atamaya yarar
    (+-/*%)= -> sağdaki değeri soldaki değer ile işleme sokar
      yani, değişkenimiz d, işlem yapılan da i olmak üzere:
      d += i -> d = d + i
      d -= i -> d = d - i
      d *= i -> d = d * i
      d /= i -> d = d / i
      d %= i -> d = d % i
  */
    // Aritmetik operatörler
    printf("%d\n", a + b);
    printf("%d\n", a - b);
    printf("%d\n", a * b);
    printf("%d\n", a / b);
    printf("%d\n", a % b);

    a += b;
    printf("%d\n", a);

    a = 45;
    a -= b;
    printf("%d\n", a);

    a = 45;
    a *= b;
    printf("%d\n", a);

    a = 45;
    a /= b;
    printf("%d\n", a);

    a = 45;
    a %= b;
    printf("%d\n", a);
    return 0;
}