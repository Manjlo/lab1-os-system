#include <stdio.h>

// Definir una estructura para almacenar información del estudiante
struct Estudiante {
    char nombre[50];
    int calificacionSO;
};

// Función para calcular el promedio de las calificaciones
float calcularPromedio(struct Estudiante estudiantes[], int numEstudiantes) {
    int suma = 0;
    for (int i = 0; i < numEstudiantes; i++) {
        suma += estudiantes[i].calificacionSO;
    }
    return (float)suma / numEstudiantes;
}

// Función para encontrar la calificación máxima
int calificacionMaxima(struct Estudiante estudiantes[], int numEstudiantes) {
    int max = estudiantes[0].calificacionSO;
    for (int i = 1; i < numEstudiantes; i++) {
        if (estudiantes[i].calificacionSO > max) {
            max = estudiantes[i].calificacionSO;
        }
    }
    return max;
}

// Función para encontrar la calificación mínima
int calificacionMinima(struct Estudiante estudiantes[], int numEstudiantes) {
    int min = estudiantes[0].calificacionSO;
    for (int i = 1; i < numEstudiantes; i++) {
        if (estudiantes[i].calificacionSO < min) {
            min = estudiantes[i].calificacionSO;
        }
    }
    return min;
}

int main() {
    int numEstudiantes;

    // Solicitar el número de estudiantes
    printf("Ingrese el número de estudiantes: ");
    scanf("%d", &numEstudiantes);

    // Crear un arreglo de estructuras para almacenar la información de los estudiantes
    struct Estudiante estudiantes[numEstudiantes];

    // Recibir los datos de los estudiantes
    for (int i = 0; i < numEstudiantes; i++) {
        printf("\nIngrese el nombre del estudiante %d: ", i + 1);
        scanf("%s", estudiantes[i].nombre);
        printf("Ingrese la calificación de %s en Sistemas Operativos: ", estudiantes[i].nombre);
        scanf("%d", &estudiantes[i].calificacionSO);
    }

    // Calcular y mostrar los resultados
    float promedio = calcularPromedio(estudiantes, numEstudiantes);
    int max = calificacionMaxima(estudiantes, numEstudiantes);
    int min = calificacionMinima(estudiantes, numEstudiantes);

    printf("\nResumen de Calificaciones de Sistemas Operativos:\n");
    printf("Promedio: %.2f\n", promedio);
    printf("Calificación Máxima: %d\n", max);
    printf("Calificación Mínima: %d\n", min);

    return 0;
}
