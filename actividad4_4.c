//RiosRodriguezDaniel 372800
//29-Ago-23
//4.- Programa en C que sirva para calcular el salario semanal de un trabajador donde se obtiene como dato de entrada las horas semanales trabajadas, el salario por hora.
/*
El programa deberá calcular el salario normal, salario extra y salario total, considerando lo siguiente:

Jornada Normal de 40 horas.
El salario normal se considera las horas trabajadas menores o igual a la jornada normal
Salario extra se considera las horas trabajadas mayores a la jornada normal y se pagan dobles las primeras 9 y triples a partir de la décima hora extra
*/
//R.R.D_act4_4_932
#include <stdio.h>
int main() 
{
    float sema,hora,nor,ext,tot;
    int i,acu=0,acu2=0;
    printf("Horas semanales\n");
    scanf("%f",&sema);

        printf("Salario por hora\n");
        scanf("%f",&hora); 
        
            
        printf("salario por hora=%f\n",hora);
        printf("horas trabajadas=%f\n",sema);

        for(i=40;i<sema && i<50;i++)
        {
            acu=acu+1;
        }
        for(i=50;i<sema;i++)
        {
            acu2=acu2+1;
        }
        ext=((hora*2)*acu)+((hora*3)*acu2);
        nor=hora*(sema-(acu+acu2));
        printf("Salario normal=%f\n",nor);
        printf("Salario extra=%f\n", ext);
        tot=ext+nor;
        printf("Salario total=%f\n",tot);
        return 0;
    
}