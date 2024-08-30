#include <stdio.h>

// Función para verificar si el carácter es una letra minúscula
int esMinuscula(char c) {
    // Verifica si el carácter está en el rango de letras minúsculas en la tabla ASCII
    if (c >= 'a' && c <= 'z') {
        return 1; // Retorna 1 si es una letra minúscula
    } else {
        return 0; // Retorna 0 si no es una letra minúscula
    }
}

int main() {
    char caracter;

    // Solicitar un carácter al usuario
    printf("Ingresa un carácter: ");
    scanf("%c", &caracter);

    // Verificar si es minúscula y mostrar el resultado
    if (esMinuscula(caracter)) {
        printf("%c es una letra minúscula.\n", caracter);
    } else {
        printf("%c no es una letra minúscula.\n", caracter);
    }

    return 0;
}
