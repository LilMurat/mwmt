/*
    Bu program, mwtm kolekisyonunun bir parçasıdır. Çemberde alanı ve çevreyi bulmak için kullanılır.

    (c) Murat Coşkun, 2022 [murat.cskn@outlook.com.tr]
*/


#include <stdio.h> /* standart girdi-çıktı kütüphanesini dahil et (printf() ve scanf() gibi fonksiyonların kullanımı için) */
#include <math.h>   /* matematik kütüphanesini dahil et (pow() gibi fonksiyonların kullanımı için) */
#include <string.h> /* string kütüphanesini dahil et (strcmp() gibi fonksiyonların kullanımı için) */

#define PI 3.141592653589793238462643383 /* PI sayısını tanımla */
#define PI02 3.14 /* PI sayısının virgülden sonraki 2 basamağına kadar tanımla */
#define INT_PI 3 /* PI sayısının tam kısmını tanımla */

double r, s, c; /* double türünden r, s ve c değişkenlerini tanımla */

int main(int argc, char *argv[])
{
    printf("r = "); scanf("%lf", &r); /* kullanıcıdan double tipinde bir veri al ve "r" değişkenine ata */
    printf("R = %lf\n", r * 2); /* çapı hesapla ve ekrana yazdır */

    if(argv[1] == NULL || strcmp(argv[1], "0") == 0)
    {
        printf("mod :: 0 (PI = %lf...)\n", PI); /* PI sayısını ekrana yazdır */
        s = PI * pow(r, 2); /* (πr² formülü ile çemberin alanını bul ve "s" değişkenine ata */
        c = 2 * PI * r; /* (2πr) formülü ile çemberin çevresini bul ve "c" değişkenine ata */
        printf("\nalan = %lf\n", s); /* çemberin alanını ("s" değişkenini) ekrana yazdır */
        printf("çevre = %lf\n", c); /* çemberin çevresini ("c" değişkenini) ekrana yazdır */
        return 0; /* programı bitir */
    } /* eğer bir mod belirtilmediyse veya mod "0" olarak belirtildiyse PI'yi 3.141592653589793238462643383 alarak hesaplama yap */
    else if(strcmp(argv[1], "1") == 0)
    {
        printf("mod :: 1 (PI = %lf)\n", PI02); /* PI sayısını ekrana yazdır */
        s = PI02 * pow(r, 2); /* (πr² formülü ile çemberin alanını bul ve "s" değişkenine ata */
        c = 2 * PI02 * r; /* (2πr) formülü ile çemberin çevresini bul ve "c" değişkenine ata */
        printf("\nalan = %lf\n", s); /* çemberin alanını ("s" değişkenini) ekrana yazdır */
        printf("çevre = %lf\n", c); /* çemberin çevresini ("c" değişkenini) ekrana yazdır */
        return 0; /* programı bitir */
    } /* eğer mod "1" olarak belirtildiyse PI'yi 3.14 alarak hesaplama yap */
    else if(strcmp(argv[1], "2") == 0)
    {
        printf("mod :: 2 (PI = %lf)\n", INT_PI); /* PI sayısını ekrana yazdır */
        s = INT_PI * pow(r, 2); /* (πr² formülü ile çemberin alanını bul ve "s" değişkenine ata */
        c = 2 * INT_PI * r; /* (2πr) formülü ile çemberin çevresini bul ve "c" değişkenine ata */
        printf("\nalan = %lf\n", s); /* çemberin alanını ("s" değişkenini) ekrana yazdır */
        printf("çevre = %lf\n", c); /* çemberin çevresini ("c" değişkenini) ekrana yazdır */
        return 0; /* programı bitir */
    } /* eğer mod "2" olarak belirtildiyse PI'yi 3 alarak hesaplama yap */

    {
        printf("\nhata: bilinmeyen mod :: %s (muhtemel mod değerleri: 0, 1, 2)\n", argv[1]); /* ekrana "bilinmeyen mod", muhtemel mod değerlerini ve girilen mod değerlerini yazdır */
        return 1; /* programı hata ile bitir */
    } /* eğer program hala bitmediyse (mod değeri 0, 1 veya 2 değilse) ekrana hata mesajı yazdır ve programı hata kodu "1" ile bitir */

}