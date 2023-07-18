#include <stdio.h>
#include <conio.h>
void main(){
    int i,N;
    float t=0;

    printf("tek sayilarin ust siniri:");
    scanf("%u",&N);
    i=1;
    while(i<=N){
        t+=i;
        i+=2;
    }
    printf("\nToplami: %0.0f",t);getch();
}