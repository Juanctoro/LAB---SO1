#include <stdio.h>

// Función que calcula el factorial de un número
int factorial(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado; 
}

/* main donde se solicita el número y ejecuta la función factorial 
si cumple con las condiciones dadas */ 
int main() {
    int numero;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("No se puede sacar factorial de un numero negativo\n");
    } else if (numero > 0) {
        printf("El factorial del numero %d es: %d\n", numero, factorial(numero));
    } else {
        printf("El factorial del numero 0 es: 1\n");
    }

    return 0;
}

