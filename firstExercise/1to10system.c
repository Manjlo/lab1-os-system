#include <stdio.h>

int main() {
    int i;

    // Encabezado de la tabla
    printf("Decimal\tOctal\tHexadecimal\n");
    printf("-------\t-----\t-----------\n");

    // Ciclo para mostrar los números del 1 al 10 en los tres sistemas
    for (i = 1; i <= 10; i++) {
        printf("%d\t%o\t%x\n", i, i, i);
    }

    return 0;
}
