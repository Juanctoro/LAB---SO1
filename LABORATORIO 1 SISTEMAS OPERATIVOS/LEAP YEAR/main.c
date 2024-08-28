#include <stdio.h>

int main() 
{
    int ano;

    // el programa le pide al usuario que inserte un año 
    printf("ingrese el año: ");
    scanf("%d", &ano);

    /* El programa verifica si es un año bisiesto o no, todo año es bisiesto
    siempre y cuando sea divisible por 4 y no sea divisible por 100 a excepcion de
    los años en los cuales finaliza un siglo, en estos casos dichos años deben de igual forma
    divisibles por 400*/
    
    if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0) 
    {
        printf("%d es un año bisiesto\n",ano);
    } 
    else 
    {
        printf("%d no es un año bisiesto\n.",ano);
    }

    return 0;
}
