#include <stdio.h>
#include <math.h>
#define satan 666
#define biggernumber(sayi1,sayi2) (sayi1>sayi2) ? sayi1 : sayi2
#define saat(karakter) (karakter=='E' || karakter=='e') ? __TIME__ : "Kullanici saati ogrenmek istemiyor"

void teams(){
    printf("Besiktas");
}

int numberx2(int sayi){
    printf("%d",sayi*2);
}

float sqrnumber(float sayi){
    return sqrt(sayi);

}

char firstch(char dizi[]){
    return dizi[0];

}

enum hafta {Pazartesi=1, Sali, Carsamba, Persembe, Cuma, Cumartesi, Pazar};


void findBigger(int dizi[]){
    int enBuyuk = dizi[0];
    int boyut = sizeof (dizi) / sizeof (dizi[0]);
    for (int i = 0; i < boyut; i++) {
        if (dizi[i]>enBuyuk)
            enBuyuk = dizi[i];
    }
    printf("en buyuk deger = %d",enBuyuk);
}


void printingList(char liste[][30],int boyut){
    for (int i = 0; i < boyut; i++) {
        printf("%s\n",liste[i]);
    }
}

void evenorodd(int number){
    if (number % 2 == 0)
        printf("Girdiginiz sayi cifttir.");
    else
        printf("Girdiginiz sayi tektir.");
}

int asalMi (int sayi) {
    for (int carpan = 2; carpan <= sayi/2; carpan++) {
        if (sayi % carpan == 0)
            return 0;
    }
    return 1;
}

int mukemmelsayi(int sayi){
    int toplam=1;

    for (int carpan = 2; carpan <= sayi/2 ; carpan++) {
        if (sayi % carpan == 0){
            toplam = carpan + toplam;

        }
    }
    if (toplam == sayi)
        return 1;
    else
        return 0;
}

int tersinecevir(int sayi){

    int  rev = 0, remainder;

    while (sayi != 0) {
    remainder = sayi % 10;
    rev = rev * 10 + remainder;
    sayi /= 10;
    }
    printf("Ters hali = %d", rev);
}

int faktoriyel(int sayi){
    int sonuc = 1;
    for (int i = 0; i < sayi; i++) {
        sonuc *= i+1;
    }
    return sonuc;
}

int faktoriyelRecursive(int sayi){
    if (sayi <= 1)
        return 1;
    else
        return sayi*faktoriyelRecursive(sayi-1);
}

int toplam(sayi){
    if (sayi != 0)
        return sayi+ toplam(sayi-1);
    else
        return sayi;
}

int faktrotiyelRecursive(sayi){
    if (sayi >= 1)
        return sayi * faktoriyelRecursive(sayi-1);
}

int main() {

/*
    // Fonksiyonlar

    printf("%.2f\n",sqrnumber(16));
    numberx2(15);
    printf("\n%d",12*12);
    printf("%c",firstch("mitra"));
*/


/*
    // Makro kullanımı yukarıda tanımlı

    printf("%d\n",satan);

    printf("%d\n",biggernumber(25,53));

    char inpclokck;
    printf("Saati ogrenmek ister misiniz?\n");
    scanf("%c",&inpclokck);

    if (saat(inpclokck))
        printf("%s",saat(inpclokck));
    else
        printf("%s",saat(inpclokck));
*/


/*
    // Enumeration

    printf("%d",Pazartesi);
*/


/*
    // Elemanları doğal sayi olan bir dizide ki en büyük sayiyi bulan fonksiyon

    int arr[10] = {-5,-32,-10,-32,-45,-12,-76,-34,-86,-34};
    findBigger(arr);
*/

/*
    // cok boyutlu isci listesini bastıran fonksiyon

    char isciListesi[5][30]={"Haydar","Burcu","Melike","Dilara","Varg Vikerness"};

    printingList(isciListesi,5);
*/

/*
    // sayının tek mi çift mi olduğunu söyleyen fonksiyon

    int nu = 45;
    evenorodd(nu);
*/

/*
    // 1 - 1000 arasındaki  asal sayiları bastıran fonksiyon
    int toplamasalsayi=0;
    for (int i = 2; i <= 1000 ; i++) {
        if (asalMi(i)==1){
            printf("%d asaldir...\n",i);
            toplamasalsayi += 1;
        }
    }
    printf("Toplam asal sayi miktari = %d",toplamasalsayi);
*/

/*
    // sayinin mukemmel sayi olum olmadiginı kontrol eden fonksiyon

    int sayi;
    printf("Lutfen bir tam sayi giriniz: ");
    scanf("%d",&sayi);

    if (mukemmelsayi(sayi) == 1)
        printf("%d mukemmel sayi",sayi);
    else
        printf("%d mukemmel sayi degildir",sayi);
*/

/*
    // kullanıcıdan alınan sayıyı tersine çeviren fonksiyon

    int sayi;
    printf("Lutfen tersini almak istediginiz sayiyi giriniz : ");
    scanf("%d",&sayi);
    tersinecevir(sayi);
*/

    // Iterative fonksiyonlar - Yukarıda olusturulmustur

    // printf("%d",faktoriyel(5));


    // Recursive fonksiyonlar  - yukarıdas olusturuldu,

    // printf("%d",faktoriyelRecursive(5));

    // printf("%d",toplam(5));

    // printf("%d",faktoriyelRecursive(5));

    











    return 0;
}
