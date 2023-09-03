//RiosRodriguezDaniel 372800
//29-Ago-23
//2.- Programa en C que use un menú para realizar conversiones de unidades de medida, donde el usuario selecciona una opción y realizará la opción según sea su selección del menú.

/*
MENÚ

1.- cm a pulgadas

2.- cm a pies

3.- Km a millas

4.- Pulgadas a cm

5.- pies a cm

6.- millas a Km
*/
//R.R.D_act4_2_932
#include <stdio.h>
int main()
{
int num1,ope;
float op1,op2,op3,op4,op5,op6;
printf("nummero 1\n");
scanf("%d",&num1);
printf("Que operacion \n");
printf("cm a pulgadas =1\n");
printf("cm a pies     =2\n");
printf("Km a millas   =3\n");
printf("Pulgadas a cm =4\n");
printf("pies a cm     =5\n");
printf("millas a Km   =6\n");
scanf("%d",&ope);

if (ope<=3)
{
    if (ope==1)
    {
        op1=num1/2.54;
        printf("%dcm a pulgadas=%f",num1,op1);
    }

    if (ope==2)
    {
        op2=num1/30.48;
        printf("%dcm a pies=%f",num1,op2);
    }

    if (ope==3)
    {
    op3=num1/1.609;
        printf("%dkm a millas=%f",num1,op3);
    }
}
else 
{
    if (ope==4)
    {
        op4=num1*2.54;
        printf("%dpulgadas a centimetros=%f",num1,op4);
    }

    if (ope==5)
    {
        op5=num1*30.48;
        printf("%dpies a centimetros=%f",num1,op5);
    }

    if (ope==6)
    {
        op6=num1*1.609;
        printf("%dmillas a kilometros=%f",num1,op6);
    }
}
return 0;

}