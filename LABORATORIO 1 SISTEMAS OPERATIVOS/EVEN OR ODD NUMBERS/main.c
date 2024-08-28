#include <stdio.h>

int main() {
    int numero;

    // Solicita al usuario que ingrese un número
    printf("Ingresa un número entero: ");
    scanf("%d", &numero);

    // Verifica la condicion: par o impar 
    if (numero % 2 == 0) {
        printf("El número %d es par.\n", numero);
    } else {
        printf("El número %d es impar.\n", numero);
    }

    return 0;
}


