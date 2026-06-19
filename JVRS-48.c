#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <string.h>
int main() {
setlocale(LC_ALL,"portuguese");
 
printf("***********************************************************\n");
printf("*JEAN VINICIO RODOVALHO SOARES - 0024931                  *\n");
printf("*Programa JVRS-48 Menu com opção de sair                  *\n");
printf("***********************************************************\n");

int opcao;

do {
	printf("1 - Mensagem\n");
	printf("2 - Sair\n");
	printf("Escolha uma opcao: ");
	scanf("%d", &opcao);
	
	if (opcao == 1){
		printf("Voce escolheu a mensagem\n");
	}
	
}

while (opcao != 2);
	printf("Programa encerrado\n");

    return 0;
}