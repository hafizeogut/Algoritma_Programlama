/*Asal Çarpanlar*/
#include <stdio.h>
#include <conio.h>
void main(){
    int a=0, b=2;
    printf("Pozitif tamsayi:");
    scanf("%u",&a);
    printf("\n");
    while (a>1)
        if (a%b==0){
            printf("%u\t",b);
            a/=b;
        }
        else b++;
    getch();
}