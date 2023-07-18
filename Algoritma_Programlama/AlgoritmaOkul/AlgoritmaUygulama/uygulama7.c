/*asal çarpanlar*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b=2;
    system("Clear");
    printf("pozitif tamsayi:");
    scanf ("%u",a);
    printf("\n");
    while (a>1)
    if(a%b==0)
    {
        printf("%u\t",b); a/=b;
    }
    else b++;
    getch();
    
}