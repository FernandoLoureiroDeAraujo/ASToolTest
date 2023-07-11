#include <stdio.h>

int main() {

    printf("Hello, World!\n");

    int contador = 0;

    if (contador == 0) {
        printf("O contador é igual a zero.\n");
    } else {
        printf("O contador não é igual a zero.\n");
    }

    while (contador < 5) {
        printf("Contador: %d\n", contador);
        contador++;
    }

    return 0;
}