#include <stdio.h>

int main() {
    // Conversión implícita
    int entero = 10;
    float flotante;
    
    // Aquí ocurre la conversión implícita (el entero se convierte en flotante)
    flotante = entero; // Conversión implícita de int a float
    printf("Conversión Implícita:\n");
    printf("Valor original (int): %d\n", entero);
    printf("Valor convertido implícitamente a float: %.2f\n\n", flotante);

    // Conversión explícita
    float numeroFlotante = 9.7;
    int numeroEntero;
    
    // Conversión explícita utilizando type casting
    numeroEntero = (int)numeroFlotante; // Se convierte float a int, truncando la parte decimal
    printf("Conversión Explícita:\n");
    printf("Valor original (float): %.2f\n", numeroFlotante);
    printf("Valor convertido explícitamente a int: %d\n", numeroEntero);

    return 0;
}
