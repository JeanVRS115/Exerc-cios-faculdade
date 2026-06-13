#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <string.h>
int main() {
setlocale(LC_ALL,"portuguese");
 
printf("***********************************************************\n");
printf("*JEAN VINICIO RODOVALHO SOARES - 0024931                  *\n");
printf("*Programa JVRS-45  Menu até escolher sair                 *\n");
printf("***********************************************************\n");

  int opcao = 0;

    while(opcao != 4){

        printf("\n===== MENU =====\n");
		printf("[1] - Saldo\n");
        printf("[2] - Saque\n");
        printf("[3] - Deposito\n");
        printf("[4] - Sair\n");
         printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if(opcao == 1){
            printf("Opcao Saldo\n");
        }
        else if(opcao == 2){
            printf("Opcao Saque\n");
        }
        else if(opcao == 3){
            printf("Opcao Deposito\n");
        }
    }

    printf("Programa encerrado.\n");

    return 0;
}