#include<stdio.h>
#include<conio.h>
void main()
{ 
    int i,N;
    float t=0;
    printf("Cift sayilarin üst siniri: ");
    scanf("%u",&N);
    i=2;
    do{t+=i;i+=2;}
    while(i<=N);
    printf("\nToplamı:  %0.0f",t); getch();
}