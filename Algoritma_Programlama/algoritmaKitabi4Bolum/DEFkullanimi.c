/*ön işlemci komutları*/
#include<stdio.h>//standar giriş çıkış kütüpjanesi
#include<conio.h>//DOS destekli giriş çıkış
#define PISAY 3.14
#define dairealan(r) PISAY*r*r
float alan,cevre,yaricap;
int main()
{
    printf("daire alan hesabi\n");
    printf("yaricap giriniz:  ");
    scanf("%f",&yaricap);
    alan=dairealan(yaricap);
    printf("Dairenin alani:%f\n",alan);
    cevre=2*PISAY*yaricap;
    printf("Dairenin cevresi:%f\n",cevre);
    #undef PISAY
    getch();
    return 0;
}
