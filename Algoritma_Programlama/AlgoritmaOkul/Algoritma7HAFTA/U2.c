/*girilen sayıya kadar çift sayıların toplamı */
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,N;
    float t=0;
    printf("CIFT SAYI UST SINIRI: ");
    scanf("%u",&N);
    i=2;
    do{
        t+=i;
        i+=2;
    }
    while (i<=N);
    {
        printf("\n Toplami: %.f",t);

    }
    getch();
}