#include <stdio.h>

int main() {
    int n;
    long long int t1 = 0, t2 = 1, siguienteTermino;

    // El programa solicita al usuario que ingrese la cantidad de terminos//
    printf("NOTA:Los numeros 0 y 1 se tienen en cuenta por defecto\n");
    printf("Ingresa el número de términos para la serie Fibonacci:");
    scanf("%d", &n);

    // Imprimir los primeros dos términos de serie//
    printf("Serie de Fibonacci: %lld, %lld", t1, t2);

    // Calcula e imprime los siguientes términos//
    for (int i = 1; i <= n; i++) {
        siguienteTermino = t1 + t2;
        printf(", %lld", siguienteTermino);

        // Actualiza los valores //
        t1 = t2;
        t2 = siguienteTermino;
    }
    
    printf("\n");

    return 0;
}


