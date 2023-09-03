#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() 
{
    int jugador, computadora;
    printf("ELIJA \npiedra=1\npapel=2\ntijera=3\n");    
    scanf("%d", &jugador);
    srand(time(NULL));
    computadora=(rand() % 3) + 1;

    printf("Tu: %d\n", jugador);
    printf("Computadora:%d\n", computadora);

    if (jugador == computadora)
    {
    printf("empate\n");
    return 0;
    }
    if ((jugador == 1 && computadora == 3) || (jugador == 2 && computadora == 1) || (jugador == 3 && computadora == 2))
    {
    printf("ganaste\n");
    return 0;
    }   
    else
    {
    printf("perdiste\n");
    return 0;
    }


    return 0;
}
