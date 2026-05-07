#include <stdio.h>

int main() {
    int numero = 0;
    printf("Digite um Numero: ");
    scanf("%i", &numero);
    if (numero %2 == 0) {
        printf("Seu numero %i eh par\n", numero);
    } else{
        printf("Seu numero %i eh impar\n", numero);
    }


    return 0;
}