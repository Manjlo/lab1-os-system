#include <stdio.h>

int main() {
    int n, i;
    int t1 = 0, t2 = 1, siguiente;

    // Solicitar la cantidad de términos al usuario
    printf("¿Cuántos términos de la serie de Fibonacci deseas imprimir? ");
    scanf("%d", &n);

    // Verificar si el número de términos es válido
    if (n <= 0) {
        printf("Por favor ingresa un número positivo.\n");
    } else {
        // Imprimir los primeros dos términos de la serie
        printf("Serie de Fibonacci: %d, %d", t1, t2);

        // Calcular e imprimir el resto de la serie
        for (i = 3; i <= n; ++i) {
            siguiente = t1 + t2; // El siguiente término es la suma de los dos anteriores
            printf(", %d", siguiente);

            // Actualizar los términos
            t1 = t2;
            t2 = siguiente;
        }
        printf("\n");
    }

    return 0;
}
