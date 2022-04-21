/*
    Bu program, mwmt kolekisyonunun bir parçasıdır. 2.dereceden denklemlerde kökleri bulmak için kullanılır.

    (c) Murat Coşkun, 2022 [murat.cskn@outlook.com.tr]
*/


#include <stdio.h> /* standart girdi-çıktı kütüphanesini dahil et (printf() ve scanf() gibi fonksiyonların kullanımı için) */
#include <math.h>   /* matematik kütüphanesini dahil et (pow() ve sqrt() gibi fonksiyonların kullanımı için) */

double a, b, c, delta, x1, x2; /* double türünden a, b, c, delta, x1 ve x2 değişkenlerini tanımla */

int main()
{
    printf("a = "); scanf("%lf", &a); /* kullanıcıdan double tipinde bir veri al ve "a" değişkenine ata */
    printf("b = "); scanf("%lf", &b); /* kullanıcıdan double tipinde bir veri al ve "b" değişkenine ata */
    printf("c = "); scanf("%lf", &c); /* kullanıcıdan double tipinde bir veri al ve "c" değişkenine ata */

    delta = pow(b, 2) - (4 * a * c); /* (b² - 4ac) formülü ile denklemin diskriminantını bul ve "delta" değişkenine ata */

    printf("\ndiskriminant = %lf\n\n", delta); /* denklemin diskriminantını ("delta" değişkenini) ekrana yazdır */

    if(delta < 0)
    {
        printf("(gerçek bir kök yok)\n");
        return 0;
    } /* eğer denklemin diskriminantı ("delta" değişkeni) negatif ise ekrana (gerçek bir kök yok) yazdır ve programı sonlandır */
    else if(delta == 0)
    {
        x1 = -b / (2 * a);
        printf("(çakışık kök)\nx1 = %lf\n", x1);
        return 0;
    } /* eğer denklemin diskriminantı ("delta" değişkeni) sıfıra eşit ise ekrana (çakışık kök) ve x1 (denklemin kökü) yazdır ve programı sonlandır */
    else
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("x1 = %lf\n", x1);
        printf("x2 = %lf\n", x2);
        printf("kökler toplamı = %lf\n", x1 + x2);
        printf("kökler farkı = %lf\n", x1 - x2);
        printf("kökler çarpımı = %lf\n", x1 * x2);
        printf("kökler bölümü = %lf\n", x1 / x2);
        return 0;
    } /* eğer denklemde çakışık kök yoksa ve denklemin diskriminantı ("delta" değişkeni) negatif değil ise ekrana x1, x2 (denklemin kökleri), kökler toplamını, kökler farkını, kökler çarpımını ve kökler bölümünü yazdır ve programı sonlandır */
}