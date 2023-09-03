//RiosRodriguezDaniel 372800
//29-Ago-23
//1.- Programa en C que use un menú para realizar las 4 operaciones básicas, donde el usuario introduce 2 números enteros y realizará la operación según sea su selección del menú.
/*
MENÚ

1.- Suma

2.- Resta

3.- Multiplicación

4.-División
*/
 
//R.R.D_act4_1_932
#include <stdio.h>
int main()
{
int num1,num2,sum,resta,multi,divi,ope;
printf("nummero 1\n");
scanf("%d",&num1);
printf("nummero 2\n");
scanf("%d",&num2);
printf("Que operacion \n");
printf("Suma            =1\n");
printf("Resta           =2\n");
printf("Multiplicacion  =3\n");
printf("Division        =4\n");
scanf("%d",&ope);

   
if (ope<=4 && ope>0)
{
    if (ope==1)
    {
        sum=num1+num2;
        printf("%d+%d=%d",num1,num2,sum);
    }

    if (ope==2)
    {
        resta=num1-num2;
        printf("%d-%d=%d",num1,num2,resta);
    }

    if (ope==3)
    {
        multi=num1*num2;
        printf("%d*%d=%d",num1,num2,multi);
    }

    if (ope==4)
    {
        divi=num1/num2;
        printf("%d/%d=%d",num1,num2,divi);
    }
}
else 
{
    printf("ERROR NO HAY OPERACION PARA ESE NUMERO");
    return 0;
}

return 0;

}