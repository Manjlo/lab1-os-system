#include <stdio.h>

int main() {
    int num;

    // Solicitar un número al usuario
    printf("Ingresa un número entero: ");
    scanf("%d", &num);

    // Verificar si el número es par o impar
    if (num % 2 == 0) {
        printf("%d es un número par.\n", num);
    } else {
        printf("%d es un número impar.\n", num);
    }

    return 0;
}
