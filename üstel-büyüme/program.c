/*
    Bu program, mwmt kolekisyonunun bir parçasıdır. Üstel büyümeyi ve küçülmeyi simüle etmek için kullanılır.

    (c) Murat Coşkun, 2022 [murat.cskn@outlook.com.tr]
*/


#include <stdlib.h> /* standart kütüphaneyi dahil et (system() gibi fonksiyonların kullanımı için) */
#include <stdio.h> /* standart girdi-çıktı kütüphanesini dahil et (printf() ve scanf() gibi fonksiyonların kullanımı için) */

double baslangic, bitis, artiskatsayi, toplam; /* double türünden baslangic, bitis, artis, sayac, toplam değişkenlerini tanımla */
int adim = 0; /* int türünden adim değişkenini tanımla ve 0 değerini ata */

int main()
{
    printf("başlangıç sayısı = "); scanf("%lf", &baslangic); /* kullanıcıdan double tipinde bir veri al ve "baslangic" değişkenine ata */
    printf("bitiş sayısı (döngünün sonsuza dek sürmesi için -> 0) = "); scanf("%lf", &bitis); /* kullanıcıdan double tipinde bir veri al ve "bitis" değişkenine ata */
    printf("artış katsayısı = "); scanf("%lf", &artiskatsayi); /* kullanıcıdan double tipinde bir veri al ve "artiskatsayi" değişkenine ata */

    printf("\n\n"); /* 2 satır boşluk bırak */

    toplam = baslangic; /* "toplam" değişkenini "baslangic" değişkeni ile eşitle */

    if(bitis != 0)
    {
        while(toplam <= bitis)
        {
            printf("\n%lf  [%d. adım]\n", toplam, adim); /* ekrana "toplam" ve "adim" değişkenlerini yazdır */
            toplam *= artiskatsayi; /* "toplam" değişkenini "artiskatsayi" ile çarp */
            adim++; /* "adim" değişkenini arttır */
            system("sleep 0.5"); /* 0.5 saniye bekle */
        } /* eğer bitiş sayısı 0'dan farklıysa toplam sayı bitiş sayısından büyük veya bitiş sayısına eşit olana dek büyüme döngüsünü sürdür */

        return 0; /* programı bitir */

    }
    else
    {
        while(1)
        {
            printf("\n%lf  [%d. adım]\n", toplam, adim); /* ekrana "toplam" ve "adim" değişkenlerini yazdır */
            toplam *= artiskatsayi; /* "toplam" değişkenini "artiskatsayi" ile çarp */
            adim++; /* "adim" değişkenini arttır */
            system("sleep 0.5"); /* 0.5 saniye bekle */
        } /* eğer bitiş sayısı 0' eşitse sonsuza dek büyüme döngüsünü sürdür */
    }
}