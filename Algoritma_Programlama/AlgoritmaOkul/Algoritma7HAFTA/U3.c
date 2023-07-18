/*sayı tahmin oyunu föy7*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int BS,Tahmin,s=0;
    system("clear");
    srand(time(NULL));
    BS=rand() % 99+1;
    do{
        printf("tahmininiz:\n");
        scanf("%d",&Tahmin);
        s++;
        if(Tahmin>BS)
        printf("DAHA KUCUK SAYI GIRINIZ...");
        else if (Tahmin<BS)
        printf("DAHA BUYUK BIR SAYI GIRINIZ...");
    }
    while (Tahmin!=BS);
    {
        printf("%d de tahminde buldunuz...",s);
        
    }
    getch();
    return 0;
    
}