/*Tam bölenler*/
#include<stdio.h>
#include<conio.h>
void main(){
    int a,i;
    system("clear");
    printf("pozitif tamsayi giriniz:");
    scanf("u",&a);
    printf("\n%u tamsayinin bolenleri\n",a);
    for (i=1; i<=a; i++)
    if (a%i==0)
    printf("%u\n",i);
    getch();
}