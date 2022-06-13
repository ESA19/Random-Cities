
#include <iostream>
#include <string>
#include <math.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main() 
{
    srand(time(NULL));
    setlocale(LC_ALL, "Turkish");
    string allcities[84] = {"ADANA","ADIYAMAN", "AFYONKARAH�SAR", "A�RI", "AMASYA", "ANKARA", "ANTALYA", "ARTV�N",
            "AYDIN", "BALIKES�R","B�LEC�K", "B�NG�L", "B�TL�S", "BOLU", "BURDUR", "BURSA", "�ANAKKALE",
            "�ANKIRI", "�ORUM","DEN�ZL�","D�YARBAKIR", "ED�RNE", "ELAZI�", "ERZ�NCAN", "ERZURUM ", "ESK��EH�R",
            "GAZ�ANTEP", "G�RESUN","G�M��HANE", "HAKKAR�", "HATAY", "ISPARTA", "MERS�N", "�STANBUL", "�ZM�R",
            "KARS", "KASTAMONU", "KAYSER�","KIRKLAREL�", "KIR�EH�R", "KOCAEL�", "KONYA", "K�TAHYA ", "MALATYA",
            "MAN�SA", "KAHRAMANMARA�", "MARD�N", "MU�LA", "MU�", "NEV�EH�R", "N��DE", "ORDU", "R�ZE", "SAKARYA",
            "SAMSUN", "S��RT", "S�NOP", "S�VAS", "TEK�RDA�", "TOKAT", "TRABZON  ", "TUNCEL�", "�ANLIURFA", "U�AK",
            "VAN", "YOZGAT", "ZONGULDAK", "AKSARAY", "BAYBURT ", "KARAMAN", "KIRIKKALE", "BATMAN", "�IRNAK",
            "BARTIN", "ARDAHAN", "I�DIR", "YALOVA", "KARAB�K ", "K�L�S", "OSMAN�YE ", "D�ZCE","�    BULUNAMADI","L    BULUNAMADI","F    BULUNAMADI"};

    for (int i = 0; i < 84; i++)//HER SEFER�NDE RANDOM �EH�R ATAMAMIZI SA�LAR
    {
        int j = rand() % (84 - i) + i;
        string random = allcities[i];
        allcities[i] = allcities[j];
        allcities[j] = random;
    }

    for (int j = 0; j < 15; j++) // BURADA J DE���KEN� HARF UZUNLU�UNU BEL�RLEMEM�Z� SA�LAR
    {
        for (int i = 0; i < 84; i++) // BURADA � DE���KEN� STR�NG�N ���NDEK� �LLERE ULA�MAMIZI SA�LAR
        {
            
            if (allcities[i].length() == j) // E�ER �LLER STR�NG�N�N �. ELEMANIN UZUNLU�U J DE���KEN�NE E��T OLUYORSA BU �. ELEMANIN KA� HARFL� OLDU�UNU BULMAMIZI SA�LAR
            {
                cout << j << " Harfli Random �l: "<<allcities[i] << endl;// BURADA �.ELEMANIN HARF UZUNLU�UNU VE �.ELEMANIN YAZDIRIRIZ
                cout << "<-------------------------------->" << endl; // KODUN �IKTISININ DAHA ANLA�ILIR G�R�LMES� ���N
                
                for(int harfKontrol=0;harfKontrol<j;harfKontrol++) // HARFKONTROL DE���KEN� �.ELEMANIN HARFLER�N� BEL�RLEMEZ� SA�LAR
                {
                    cout << allcities[i].substr(harfKontrol, 1) << endl;
                    cout << "|" << endl;
                    cout << endl;
                    string sehirinharfleri = allcities[i].substr(harfKontrol, 1);// �.ELEMANIN HARFLER�N� TEKER TEKER STR�NG�N ���NE DEPOLAR
                    for (int x = 0; x < 84; x++)
                    {
                        
                       if (sehirinharfleri == allcities[x].substr(0, 1))//DEPOLANAN �.ELEMANIN HARFLER�N� �LLER STR�NG�N�N ���NDEK� X.ELEMANIN �LK HARFLER�YLE KAR�ILA�TIRIP O HARFLE BA�LAYAN �L� BULMAMIZI SA�LAR
                       {
                           cout << allcities[x] << endl;
                           cout << "****************************" << endl;// KODUN �IKTISININ DAHA ANLA�ILIR G�R�LMES� ���N
                           break;
                       }
                       
                      
                        
                    }
                }
                break;
                
                
                 
                
            }
            
        }
    }
}