#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int jugador, computadora;

    srand(time(NULL)); // Inicializar la semilla aleatoria

    printf("Juguemos a Piedra, Papel o Tijera!\n");
    printf("1. Piedra\n");
    printf("2. Papel\n");
    printf("3. Tijera\n");

    printf("Elige tu jugada (1-3): ");
    scanf("%d", &jugador);

    if (jugador < 1 || jugador > 3) {
        printf("Selección no válida. Intenta de nuevo.\n");
        return 1;
    }

    // Generar la elección aleatoria de la computadora (1-3)
    computadora = rand() % 3 + 1;

    printf("Tú: ");
    if (jugador == 1)
        printf("Piedra\n");
    else if (jugador == 2)
        printf("Papel\n");
    else
        printf("Tijera\n");

    printf("Computadora: ");
    if (computadora == 1)
        printf("Piedra\n");
    else if (computadora == 2)
        printf("Papel\n");
    else
        printf("Tijera\n");

    // Determinar el ganador
    if ((jugador == 1 && computadora == 3) || (jugador == 2 && computadora == 1) || (jugador == 3 && computadora == 2))
        printf("¡Ganaste!\n");
    else if ((computadora == 1 && jugador == 3) || (computadora == 2 && jugador == 1) || (computadora == 3 && jugador == 2))
        printf("La computadora gana.\n");
    else
        printf("Empate!\n");

    return 0;
}
