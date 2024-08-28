#include <stdio.h>

/* Funcion que calcula la potencia usando recursividad */
int potencia(int base, int exponente) {
    // El exponente de cualquier numero a la 0 es: 1//
    if (exponente == 0) {
        return 1;
    }
    return base * potencia(base,exponente - 1);
}

int main() {
    int base,exponente;
    
    // Solicita al usuario la base y el exponente
    printf("Ingresa la base: ");
    scanf("%d", &base);
    printf("Ingresa el exponente: ");
    scanf("%d", &exponente);
    
    // calcula la potencia 
    int resultado = potencia(base,exponente);
    
    // imprimir el resultado
    printf("%d^%d = %d\n", base, exponente, resultado);
    
    return 0;
}

