//RiosRodriguezDaniel 372800
//29-Ago-23
//6.- Programa en C que sirva para calcular el Total a pagar por consumo de agua, donde el dato de entrada son los M3 de agua consumidos, Tomar en cuenta que se cobra escalonada de la Siguiente manera:
/*
Rango1: 0 al 4 M3 $50 x facturación sin importar cuánto consumió en este rango

Rango2: 5 a 15 M3 $8.00 x M3

Rango3: 16 a 50 M3 $10.00 x M3

Rango4: 51 M3 en adelante $11.00 x M3

Nota: Desplegar SubTotal, Iva(16%), y Total a pagar.
*/
//R.R.D_act4_6_932
#include <stdio.h>
int main()
{
    float iva, rango, ran1, ran2, ran3, ran4, subtotal, total;
    printf("Cuantos m3 utilizo\n");
    scanf("%f",&rango);

    if(rango<=15)
    {
        if(rango<=4)
        {
        ran1=50;
        iva=.16*ran1;
        subtotal=ran1;
        total=ran1+iva;
        }
        else
        {
        ran2=rango-4;
        subtotal=50+(ran2*8);
        iva=.16*subtotal;
        total=subtotal+iva;
        }
    }
    else
    {
    if(rango<=50)
    {
    ran3=rango-15;
    subtotal=138+(ran3*10);
    iva=.16*subtotal;
    total=subtotal+iva;
    }
    else
    {
    ran4=rango-50;
    subtotal=488+(ran4*11);
    iva=.16*subtotal;
    total=subtotal+iva;
    }
    }
    printf("SubTotal=%f\n",subtotal);
    printf("Iva=%f\n",iva);
    printf("total=%f\n",total);
}
