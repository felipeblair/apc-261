#include <stdio.h>

int main() {
    int numero = 1;

    while(numero < 1 || numero > 10) {
        printf("Entre com um numero de 1 a 10: ");
        scanf("%i", &numero);
        while(getchar() != '\n');
    }

    return 0;
}