//RiosRodriguezDaniel 372800
//29-Ago-23
//5.- Programa en C que sirva para desplegar el Total de una llamada telefónica donde se pide como datos de entrada los minutos y el tipo de llamada, se cobra de la siguiente manera:
/*
MENÚ
1.- Llamada Local $3.00 sin límite de tiempo
2.- Llamada Nacional $7.00 por los 3 primeros minutos y $2.00 minuto adicional
3.- Llamada Internacional $9.00 por los 2 primeros minutos y $4.00 minuto adicional
Desplegar, Subtotal,Iva (16%) y Total.
*/
//R.R.D_act4_5_932
#include <stdio.h>
int main()
{
    float minutos,tipo,iva,subtotal,total;
    float na,nd;
    int i,acu=0;
    printf("Cuantos minutos fueron\n");
    scanf("%f",&minutos);
    printf("Tipo de llamada\n");
    printf("local         =1\n");
    printf("nacional      =2\n");
    printf("internacional =3\n");
    scanf("%f",&tipo);

        if(tipo<=2)
        {
        if(tipo<=1)
        {
        printf("Subtotal=3\n");
        iva=3*.16;
        printf("iva=%f\n",iva);
        total=iva+3;
        printf("total=%f\n",total);
        return  0;
        }
        else
        {
            for(i=3;i<minutos;i++)
            {
            acu=acu+1;
            }
        na=7*(minutos-acu);
        nd=2*acu;
        subtotal=na+nd;
        printf("Subtotal=%f\n",subtotal);
        iva=subtotal*.16;
        printf("iva=%f\n",iva);
        total=iva+subtotal;
        printf("total=%f\n",total);
        return 0;
        }
        }
        else
        {
        if (tipo==3)
        {
        for(i=2;i<minutos;i++)
        {
        acu=acu+1;
        }
        na=9*(minutos-acu);
        nd=4*acu;
        subtotal=na+nd;
        printf("Subtotal=%f\n",subtotal);
        iva=subtotal*.16;
        printf("iva=%f\n",iva);
        total=iva+subtotal;
        printf("total=%f\n",total);
        return 0;
        }
        }
    }