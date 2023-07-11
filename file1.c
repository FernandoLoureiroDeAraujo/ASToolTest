#include <stdio.h>

int main() {

    int contador = 0;

    if (contador == 0) {
        printf("O contador é igual a zero.\n");
    } else {
        printf("O contador não é igual a zero.\n");
    }

    printf("Hello, World!\n");

    while (contador < 5) {
        printf("Contador: %d\n", contador);
        contador++;
    }

    return 0;
}