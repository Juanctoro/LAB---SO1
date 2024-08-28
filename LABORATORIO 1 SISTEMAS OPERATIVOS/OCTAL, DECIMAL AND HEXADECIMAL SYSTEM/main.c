#include <stdio.h>

int main() {

    // Encabezado de la tabla//
    printf("Decimal\tOctal\tHexadecimal\n");
    printf("-------\t-----\t-----------\n");

    // Mostrar los números del 1 al 10 en octal, decimal y hexadecimal//
    for (int i = 1; i <= 10; i++) {
        printf("%d\t%o\t%x\n", i, i, i);
    }

    return 0;
}


