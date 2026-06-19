#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <string.h>
int main() {
setlocale(LC_ALL,"portuguese");
 
printf("***********************************************************\n");
printf("*JEAN VINICIO RODOVALHO SOARES - 0024931                  *\n");
printf("*Programa JVRS-50 Número positivo obrigatório             *\n");
printf("***********************************************************\n");

int numero;

do {
	printf("Digite um numero positivo: ");
	scanf("%d", &numero);
	
	if (numero <= 0) {
    printf("Numero invalido. Digite novamente.\n");
	}
}

while (numero <= 0);
	printf("Numero aceito!\n");

    return 0;
}