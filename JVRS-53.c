#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <string.h>
int main() {
setlocale(LC_ALL,"portuguese");
 
printf("***********************************************************\n");
printf("*JEAN VINICIO RODOVALHO SOARES - 0024931                  *\n");
printf("*Programa JVRS-53 Confirmar saída com 's'                 *\n");
printf("***********************************************************\n");

  char opcao;

    do {
        printf("\n=== MENU ===\n");
        printf("1 - Cadastrar\n");
        printf("2 - Consultar\n");

        printf("\nDeseja sair? (s para sair): ");
        scanf(" %c", &opcao);

    } while (opcao != 's');

    printf("Programa encerrado.\n");

    return 0;
}