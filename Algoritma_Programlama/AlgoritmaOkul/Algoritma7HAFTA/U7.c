/*DO while döngüsü kullanarak ekrana 10 kere merhaba dünya yazdırmAK*/
#include<stdio.h>
int main(void)
{
    int i=0;
    do{
        //önce i yi artır
        //sonra ekraana metni yazdır
        printf("%2d: Merhaba Dunya\n",++i);
    } while (i<10);
    return 0;
}