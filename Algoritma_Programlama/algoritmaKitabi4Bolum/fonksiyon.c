#include<stdio.h>
#include<conio.h>
float carp(int a,int b)
{   float c; c=a*b; return c;}
void main(){
    int k,l; float m;
    printf("birinci sayiyi giriniiz=> ");
    scanf ("%d",&l);
    printf("ikinci sayiyi giriniiz=> ");
    scanf ("%d",&k);
    m=carp(k,l);
    printf("caarpim:::%f",m);
    getch();
}