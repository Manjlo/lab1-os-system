#include <stdio.h>

int main() {
    int num, i;
    unsigned long long factorial = 1; // Usamos 'unsigned long long' para manejar números grandes

    // Solicitar entrada al usuario
    printf("Ingresa un número entero positivo: ");
    scanf("%d", &num);

    // Verifica si el número es negativo
    if (num < 0) {
        printf("Error! El factorial no está definido para números negativos.\n");
    } else {
        // Calcular el factorial
        for (i = 1; i <= num; ++i) {
            factorial *= i; // Multiplica el valor actual de 'factorial' por 'i'
        }

        // Mostrar el resultado
        printf("El factorial de %d es: %llu\n", num, factorial);
    }

    return 0;
}
