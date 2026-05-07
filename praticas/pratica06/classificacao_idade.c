#include <stdio.h>

int main() {
    int idade;
    
    printf("Informe sua idade: ");
    scanf("%i", &idade);

    if (idade <= 12) {
        printf("Voce eh criança");
    } else if (idade < 18) {
        printf("Voce eh adolescente");
    } else if(idade <= 64) {
        printf("Voce eh adulto(a)");
    } else {
        
    }

    return 0;
}