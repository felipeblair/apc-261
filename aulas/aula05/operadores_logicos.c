#include <stdio.h>

int main(){
    int idade;

    printf("entre com a idade do cidadao: ");
    scanf("%i", &idade);
    while(getchar() != '\n');

    // operadores logicos
    // 1 - verdadeiro 0 - falso
    // E - && - Falso E qualquer coisa = Falso
    // OU - || - Verdadeiro Ou qualquer coisa = Verdadeiro
    // NAO - ! - Nao Verdadeiro = Falso, NAO Falso = Verdadeiro

    int eh_obrigado_votar = idade  >= 18 && idade <=70;
    int eh_facultativo_votar = (idade >= 16 && idade < 18) || idade > 70;
    int nao_eh_obrigado_votar = !eh_obrigado_votar;

    printf("Voce tem %i anos e deve votar? %i \n", idade, eh_obrigado_votar);
    printf("Voce tem %i anos e pode votar? %i \n", idade, eh_facultativo_votar);
    printf("Voce tem %i anos e nao deve votar? %i \n", idade, nao_eh_obrigado_votar);
    return 0;
}