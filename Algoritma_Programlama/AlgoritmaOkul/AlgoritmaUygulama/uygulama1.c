/*döngü 1*/
#include <stdio.h>
#include <conio.h>
void main (){   
    int i,N; 
    float t=0; 
    printf("Üst Sınırı Giriniz");
    scanf("%u",&N);
    for (i=1; i<=N; i++) 
    t+=i;
    printf("\n1  den üs sınıra kadar tamsayıların toplamı  :%0.0f",t);
    getchar();
}
