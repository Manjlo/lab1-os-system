#include <stdio.h>

// Función para verificar si el carácter es una letra mayúscula
int esMayuscula(char c) {
    // Verifica si el carácter está en el rango de letras mayúsculas en la tabla ASCII
    if (c >= 'A' && c <= 'Z') {
        return 1; // Retorna 1 si es una letra mayúscula
    } else {
        return 0; // Retorna 0 si no es una letra mayúscula
    }
}

int main() {
    char caracter;

    // Solicitar un carácter al usuario
    printf("Ingresa un carácter: ");
    scanf("%c", &caracter);

    // Verificar si es mayúscula y mostrar el resultado
    if (esMayuscula(caracter)) {
        printf("%c es una letra mayúscula.\n", caracter);
    } else {
        printf("%c no es una letra mayúscula.\n", caracter);
    }

    return 0;
}
