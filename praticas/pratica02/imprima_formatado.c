#include <stdio.h>

int main(){
    printf("==============================\n");
    printf("      N O T A    L E G A L\n");
    printf("==============================\n");
    printf("Produto         Qtd Valor Unit\n");
    printf("%-15s %03i %10.2f\n", "Camiseta", 002, 39.99);
    printf("%-15s %03i %10.2f\n", "Calca", 001, 89.90);
    printf("%-15s %03i %10.2f\n", "Meia Social", 003, 19.99);
    printf("==============================\n");
    printf("Total                   %6.2f\n", 229.85);
    return 0;
}