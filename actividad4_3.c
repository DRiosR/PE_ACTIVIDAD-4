//RiosRodriguezDaniel 372800
//29-Ago-23
//3.- Programa en C que lea 6 números, desplegar el valor del número mayor.
//R.R.D_act4_3_932
#include <stdio.h>
int main()
{
    float num1,num2,num3,num4,num5,num6,mayor;
    mayor=num1;
    printf("Escribe los 6 numeros\n");
    scanf("%f",&num1);
    scanf("%f",&num2);
    scanf("%f",&num3);
    scanf("%f",&num4);
    scanf("%f",&num5);
    scanf("%f",&num6);

if (num2>mayor)
{
    mayor=num2;
}

if(num3>mayor)
{
    mayor=num3;
}

if(num4>mayor)
{
    mayor=num4;
}

if(num5>mayor)
{
    mayor=num5;
}

if(num6>mayor)
{
    mayor=num6;
}
printf("El numero mayor es=%f",mayor);
return 0;
}