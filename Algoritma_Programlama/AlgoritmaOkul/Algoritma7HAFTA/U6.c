/*
hafta 7
alacağı n değerine göre ,kendisine kadar olan sayıların kareleri toplamını yazdıran program
 */
#include<stdio.h>
int main(void)
{
    int i=0,ToplamDeger=0;
    int n;
    printf("Lutfen n degerini giriniz:  ");
    scanf("%d",&n);
    while(i<=n){
        ToplamDeger +=i*i;
        i++;
    }
    printf("SONUC:%d\n",ToplamDeger);
    return 0;
}