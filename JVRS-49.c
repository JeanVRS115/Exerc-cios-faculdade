#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <string.h>
int main() {
setlocale(LC_ALL,"portuguese");
 
printf("***********************************************************\n");
printf("*JEAN VINICIO RODOVALHO SOARES - 0024931                  *\n");
printf("*Programa JVRS-49 Pedir senha até acertar                 *\n");
printf("***********************************************************\n");

int senha;

do {
	printf("Digite a senha: ");
	scanf("%d", &senha);
	
	if (senha == 1111){
		printf("Acesso Liberado\n");
	}
	else {
		printf("Digite Novamente\n");
	}
	
}

while (senha != 1111);

    return 0;
}