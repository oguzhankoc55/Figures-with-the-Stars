#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,giris,yildiz,bosluk;

    printf("Bir sayi giriniz: ");
    scanf("%d",&giris);
    bosluk=giris-1;
    yildiz=1;
    for(i=0;i<giris;i++){//Satir sayisi
            for(j=0;j<bosluk;j++){//for ile bosluk
                printf(" ");
            }
            for(j=0;j<yildiz;j++){//Yildiz yazdirilir
                printf("*");
            }
            printf("\n");
            bosluk--;//bosluk 1 azlatılmalı
            yildiz+=2;//her satırda 2 artırılmalı


}

    return 0;
}
