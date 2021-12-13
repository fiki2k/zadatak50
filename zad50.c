// Program ce pretvorit oktalni u binarni pomocu funkcije.

#include <stdio.h>
#include <math.h>
//Ova funkcija pretvara oktalni u binarni broj
long oktalniUbinarni(int oktalni)
{
    int decimalni = 0, i = 0;
    long binarni = 0;

    /* Ova petlja pretvara oktalni u decimalni
     */
    while(oktalni != 0)
    {
	decimalni = decimalni + (oktalni%10) * pow(8,i);
	i++;
	oktalni = oktalni / 10;
    }

    //i je reinicijaliziran
    i = 1;

    /* Ova petlja pretvara decimalni u binarni
     */
    while (decimalni != 0)
    {
	binarni = binarni + (decimalni % 2) * i;
	decimalni = decimalni / 2;
	i = i * 10;
    }

    return binarni;
}
int main()
{
    int oktalni;

    printf("Unesi oktalni broj: ");
    scanf("%d", &oktalni);

    //Pozivanje funkcije
    printf("Binarni broj je: %ld", oktalniUbinarni(oktalni));

    return 0;
}
