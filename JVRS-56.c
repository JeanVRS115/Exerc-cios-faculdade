#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <string.h>
int main() {
setlocale(LC_ALL,"portuguese");
 
printf("**************************************************************\n");
printf("*JEAN VINICIO RODOVALHO SOARES - 0024931                     *\n");
printf("*Programa JVRS-56  O Menu do Fast-Food Digital               *\n");
printf("**************************************************************\n");

  int opcao;

    printf("=== MENU FAST-FOOD ===\n");
    printf("1 - Combo Hamburguer + Batata + Refri\n");
    printf("2 - Combo Pizza Brotinho + Refri\n");
    printf("3 - Combo Salada + Suco Natural\n");
    printf("4 - Combo Balde de Frango + Molho\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("Combo Hamburguer + Batata + Refri - R$ 30,00\n");
            break;

        case 2:
            printf("Combo Pizza Brotinho + Refri - R$ 25,00\n");
            break;

        case 3:
            printf("Combo Salada + Suco Natural - R$ 22,00\n");
            break;

        case 4:
            printf("Combo Balde de Frango + Molho - R$ 35,00\n");
            break;

        default:
            printf("Opcao invalida! Escolha de 1 a 4.\n");
    }

    return 0;
}