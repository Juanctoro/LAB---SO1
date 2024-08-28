#include <stdio.h>
//incluimos la biblioteca ctype.h que nos permite usar la funcion islower()//
#include <ctype.h>

int main() {

    char d;

    // Solicitamos al usuario que ingrese un caracter //
    printf("Ingresa un carácter: ");
    scanf("%c", &d);

    /* Verificamos si el carácter es una letra minúscula usando islower()
    la cual es una funcion parecida a la isupper() pero en este caso revisa
    si los caracteres se encuentran en el rango a hasta z */ 
    
    if (islower(d)) {
        printf("El carácter '%c' es una letra minúscula.\n", d);
    } else {
        printf("El carácter '%c' no es una letra minúscula.\n", d);
    }

    return 0;
}


