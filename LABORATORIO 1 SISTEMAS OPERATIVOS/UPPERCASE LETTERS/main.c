#include <stdio.h>
//incluimos la biblioteca ctype.h que nos permite usar la funcion isupper()//
#include <ctype.h>

int main() {
    char c;

    // El programa solicita al usuario ingresar un caracter 
    printf("Ingresa un carácter: ");
    scanf("%c", &c);

    /* Verificar si el carácter es una letra mayúscula haciendo uso de 
    la funcion isupper(), esta funcion permite abreviar la comparacion
    en un rango de la A hasta la Z*/ 
    
    if (isupper(c)) {
        printf("El carácter '%c' es una letra mayúscula.\n", c);
    } else {
        printf("El carácter '%c' no es una letra mayúscula.\n", c);
    }

    return 0;
}

