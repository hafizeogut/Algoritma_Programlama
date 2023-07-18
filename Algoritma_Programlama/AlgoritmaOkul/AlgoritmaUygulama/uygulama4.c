#include <stdio.h>
#include <conio.h>
int main(void){ 
    int a,i;
    printf("a sayısını giriniz:\n");
    scanf ("%d",&a);
    for(i=0;i<=a;i++)
    {
      if(a%i==0)
      printf("sonuc:%d",i);
    else
      printf("sonuc 0 dan farklı");
    }
    getchar();
}