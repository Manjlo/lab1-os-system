#include <stdio.h>

// Función recursiva para calcular la potencia
int potencia(int base, int exponente) {
    // Caso base: cualquier número elevado a 0 es 1
    if (exponente == 0)
        return 1;
    // Caso recursivo: multiplicamos la base por el resultado de la misma operación con exponente reducido
    else
        return base * potencia(base, exponente - 1);
}

int main() {
    int base, exponente;

    // Solicitar la base y el exponente al usuario
    printf("Ingresa la base: ");
    scanf("%d", &base);

    printf("Ingresa el exponente (entero positivo): ");
    scanf("%d", &exponente);

    // Si el exponente es negativo, mostramos un mensaje de error
    if (exponente < 0) {
        printf("Error! El exponente debe ser un entero positivo.\n");
    } else {
        // Llamada a la función recursiva
        int resultado = potencia(base, exponente);
        printf("%d elevado a la potencia de %d es: %d\n", base, exponente, resultado);
    }

    return 0;
}
