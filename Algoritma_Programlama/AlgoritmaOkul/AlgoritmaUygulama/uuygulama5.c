#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
 
main()
{ 
    int BS,tahmin,s=0;
    system("clear");
    srand(time(NULL));
    BS=rand() % 20 ;
    do
    {
      printf("tahmininiz:");
      scanf("%d",tahmin);
      s++;
      if(tahmin>BS) 
      printf("DAHA KUCUK SAYI GIRINIZ...\n");
      else if(tahmin<BS)
       printf("DAHA BUYUK SAYI GIRINIZ...\n");
    } while (tahmin!=BS);
    {
        printf("%d de tahminde bulundunuz...",s);

    }
    getch();
    return 0;
    
}