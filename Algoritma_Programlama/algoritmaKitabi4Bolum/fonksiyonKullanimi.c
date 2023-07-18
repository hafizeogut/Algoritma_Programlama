#include<stdio.h>
#include<conio.h>
float carp(a,b)
int a,b;
{
    float c; c=a*b; return c;  
}
int main ()
{
    int k,l; float m; 
    printf(" Birinci sayiyi giriniz  :");
    scanf(" %d ",&k);
    scanf("%d",&l);
    m=carp(k,l);
    printf("Girilen iki sayinin carpimi=>%f",m);
    getch(); return 0;
}