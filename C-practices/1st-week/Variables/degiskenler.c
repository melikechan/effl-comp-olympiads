#include <stdio.h>

int main(void)
{
	/* Değişken dediğimiz şey, birden fazla kez kullanacağımız değerleri tutmaya yarar.
       Bu değerler tam sayı, harf, ondalıklı sayı, dizi vb. olabilir.
       
       Örnek bir değişken tanımı şöyledir:
          (Değişken tipi) (değişken adı) ([Eğer en başta değer atanacaksa] = deger) ;
       
       Bu ilk örnekte:
          int           -> değişken tipi. "int", integer yani tam sayı anlamındadır.
          daireYaricapi -> değişkenin adı. Bu değişkeni tekrar kullanırken
                           bu ismi kullanırız.
          5             -> değişkenin değeri. Burada 5 değeri atanmış.
          ;             -> Bu "ifade"nin sona erdiğini ifade eder. C 
                           programlama dilinde her ifade (burada değişken
                           tanımladık) noktalı virgül ile sona ermelidir.
    */
	int daireYaricapi = 5;

	/* Bu ikinci örnekte ise değişkene bir değer atanmamış. 
       İnceleyelim:
          float           -> değişkenin tipi. "float", yani "floating point number"
                            ondalıklı sayı anlamındadır.
          daireYaricapi2 -> değişkenin adı.
          ;              -> ifade bitirilmiş.
       
       Bir değişkeni tanımlarken ona bir değer atamak zorunluluğunuz yoktur.
       Burada da olduğu gibi değişkeni önce tanımlayıp değerini sonradan
       atayabilirsiniz.
    */
	float daireYaricapi2;

	/* Bir değişkene değer atama işlemi böyle yapılır. 
       Burada "daireYaricapi" değişkeninin değeri "daireYaricapi2" 
       değişkenine aktarılmış.
    */
	daireYaricapi2 = daireYaricapi;

	// Bu ifade "daireYaricapi2" değişkeninin değerini ekrana yazar.
	printf("%f", daireYaricapi2);
}
