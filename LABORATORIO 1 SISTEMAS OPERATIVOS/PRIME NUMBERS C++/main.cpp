#include <iostream>
using namespace std;

// Función para determinar si un número es primo//
bool esPrimo(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// Función para identificar los números primos en un arreglo//
void identificarPrimos(int numeros[], int cantidad, int primos[], int &cantidadPrimos) {
    cantidadPrimos = 0;
    for (int i = 0; i < cantidad; i++) {
        if (esPrimo(numeros[i])) {
            primos[cantidadPrimos] = numeros[i];
            cantidadPrimos++;
        }
    }
}

// Función para mostrar todos los números primos dentro de un rango//
void primosEnRango(int inicio, int fin, int primos[], int &cantidadPrimos) {
    cantidadPrimos = 0;
    for (int i = inicio; i <= fin; i++) {
        if (esPrimo(i)) {
            primos[cantidadPrimos] = i;
            cantidadPrimos++;
        }
    }
}

int main() {
    int numero;

    // Determinar si un número es primo//
    cout << "Ingrese un número para determinar si es primo: ";
    cin >> numero;
    if (esPrimo(numero)) {
        cout << "El número " << numero << " es primo." << endl;
    } else {
        cout << "El número " << numero << " no es primo." << endl;
    }

    // Identificar números primos en una lista//
    int cantidad;
    cout << "\nIngrese la cantidad de números en la lista:\n";
    cin >> cantidad;

    int numeros[100];  // Arreglo para almacenar los números de la lista
    int primos[100];   // Arreglo para almacenar los números primos encontrados
    int cantidadPrimos;

    cout << "Ingrese los números:\n";
    for (int i = 0; i < cantidad; i++) {
        cin >> numeros[i];
    }

    identificarPrimos(numeros, cantidad, primos, cantidadPrimos);
    cout << "Los números primos en la lista son: ";
    for (int i = 0; i < cantidadPrimos; i++) {
        cout << primos[i] << " ";
    }
    cout << endl;

    // Mostrar números primos dentro de un rango//
    int inicio, fin;
    cout << "\nIngrese el rango de números (inicio y fin) para encontrar primos:\n";
    cin >> inicio >> fin;

    primosEnRango(inicio, fin, primos, cantidadPrimos);
    cout << "Los números primos en el rango\t" << inicio<< " a " << fin << " son: ";
    for (int i = 0; i < cantidadPrimos; i++) {
        cout << primos[i] << " ";
    }
    cout << endl;

    return 0;
}
