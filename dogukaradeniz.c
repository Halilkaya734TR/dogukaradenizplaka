#include <stdlib.h>
#include <stdio.h>
int main()
{
    FILE *fp;
    int sayac = 0; //text dosyasında şehrin plakasının olup olmadığını kontrol ediyor.
    fp = fopen("dogukaradeniz.txt", "r");
    if (fp == NULL)
    {
        printf("Dosya acilamadi."); //text dosyası açılamazsa verilecek hata yazısı.
    }

    int plaka, okunan_plaka;
    char sehir[20];
    printf("Sehrin plakasini giriniz:");
    scanf("%d", &plaka); //Kullanıcıdan şehir plakası alıyor.
    while (fscanf(fp, "%d %s", &okunan_plaka, sehir) != EOF) //text dosyasındaki yazanları okuyor.
    {
        if (okunan_plaka == plaka) //text dosyasında yazan plaka varsa printf ile yazdırıp sayacı 1 arttırıyor ve kodu bitiriyor.
        {
            printf("%d plakali şehir %s, Dogu Karadeniz bölgesinde yer alir.\n", plaka, sehir);
            sayac = 1;
            break;
        }
    }
    fclose(fp);
    if (sayac == 0) //Eğer text dosyasında o plaka yoksa sayac 0 kalıyor ve hata kodu veriyor.
        printf("Hatali Kod Girdiniz!");
}
