#include <stdio.h>

int main() {
    int opcion, numeroInt;
    double numeroDouble;

    // Menu de conversiones para el usuario//
    printf("Seleccione el tipo de conversión que desea realizar:\n");
    printf("1. int a double\n");
    printf("2. double a int\n");
    printf("Ingrese su opción: ");
    scanf("%d", &opcion);

    if (opcion == 1) {
        printf("Ingrese un número entero: ");
        scanf("%d", &numeroInt);
        numeroDouble = numeroInt;  // Conversión implícita de int a double//
        printf("El entero %d fue convertido al decimal %.2f\n", numeroInt, numeroDouble);
    } else if (opcion == 2) {
        printf("Ingrese un número decimal: ");
        scanf("%lf", &numeroDouble);
        numeroInt = (int)numeroDouble;  // Conversión explícita de double a int
        printf("El decimal %.2f fue convertido al entero %d\n", numeroDouble, numeroInt);
    } else {
        printf("Opción no válida. Por favor, seleccione 1 o 2.\n");
    }

    return 0;
}


