#include <stdio.h>

#define max_Estudiantes 20  // Número máximo de estudiantes//
#define max_Calificaciones 4  // Número máximo de calificaciones por estudiante//

// Definimos la estructura para almacenar la información de cada estudiante//
struct Estudiante {
    char nombre[50];
    int id;
    float calificaciones[max_Calificaciones];
    float promedio;
};

// Función para ingresar los datos de los estudiantes//
void ingresarDatos(struct Estudiante estudiantes[], int num_estudiantes) {
    for (int i = 0; i < num_estudiantes; i++) {
        printf("Ingrese el nombre del estudiante %d: ", i + 1);
        scanf("%s", estudiantes[i].nombre);
        printf("Ingrese el codigo del estudiante %d: ", i + 1);
        scanf("%d", &estudiantes[i].id);

        float suma = 0.0;
        for (int j = 0; j < max_Calificaciones; j++) {
            printf("Ingrese la calificación %d del estudiante %s: ", j + 1,estudiantes[i].nombre);
            scanf("%f", &estudiantes[i].calificaciones[j]);
            suma += estudiantes[i].calificaciones[j];
        }

        estudiantes[i].promedio = suma / max_Calificaciones;  // Calcular promedio individual//
    }
}

// Función para mostrar los datos de los estudiantes//
void mostrarDatos(struct Estudiante estudiantes[], int num_estudiantes) {
    printf("\nCalificaciones de los estudiantes:\n");
    for (int i = 0; i < num_estudiantes; i++) {
        printf("Estudiante: %s\n", estudiantes[i].nombre);
        printf("Codigo: %d\n", estudiantes[i].id);
        for (int j = 0; j < max_Calificaciones; j++) {
            printf("Calificación %d: %.2f\n", j + 1, estudiantes[i].calificaciones[j]);
        }
        printf("Promedio: %.2f\n", estudiantes[i].promedio);
        printf("---------------------------\n");
    }
}

int main() {
    struct Estudiante estudiantes[max_Estudiantes];  // Arreglo de estructuras//
    int num_estudiantes;

    printf("Ingrese el número de estudiantes (máximo %d): ", max_Estudiantes);
    scanf("%d", &num_estudiantes);

    if (num_estudiantes > max_Estudiantes) {
        printf("El número de estudiantes sobrepasa el máximo permitido.\n");
        return 1;
    }

    ingresarDatos(estudiantes,num_estudiantes);
    mostrarDatos(estudiantes,num_estudiantes);

    return 0;
}
