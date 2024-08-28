#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Solicitamos al usuario que ingrese los tres números//
    printf("Ingresa el primer número: ");
    scanf("%d", &num1);

    printf("Ingresa el segundo número: ");
    scanf("%d", &num2);

    printf("Ingresa el tercer número: ");
    scanf("%d", &num3);

    // Determinar cual es el mayor de los tres números //
    if (num1 >= num2 && num1 >= num3) {
        printf("El mayor número es: %d\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("El mayor número es: %d\n", num2);
    } else {
        printf("El mayor número es: %d\n", num3);
    }

    return 0;
}


