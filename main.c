#include <stdio.h>
#include <math.h>
int main()
{
    int sekos_narys, sum = 0, liekana, x = 0, tarpinis; //x - sekos nariu, kuriu skaitmenu suma nelygine, skaicius
    printf("Iveskite sveikuju skaiciu seka: \n");

    while (sekos_narys != 0)   //duomenu ivedimas
    {
        while ((scanf("%d", &sekos_narys))!=1)
        {
            printf("iveskite sveikaji skaiciu:");
            while(getchar() != '\n');
        }
    }
     /*   tarpinis = sekos_narys;
        while (tarpinis != 0)   //skaiciaus skaitmenu sumos skaiciavimas
        {
            liekana = tarpinis % 10;
            sum = sum + liekana;
            tarpinis = tarpinis / 10;
        }
        if (sum%2!=0)   //nelyginiu sumu skaiciaus radimas
        {
            x++;
        }
        sum = 0;
    }

    printf("%d", x);*/


    return 0;
}
