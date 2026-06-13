#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <string.h>
int main() {
setlocale(LC_ALL,"portuguese");
 
printf("****************************************************\n");
printf("*JEAN VINICIO RODOVALHO SOARES - 0024931           *\n");
printf("*Programa JVRS-39 Verificar se um número é positivo*\n");
printf("****************************************************\n");


int numero = 0;

while(numero<=0){
	printf("digite um numero: ");
	scanf("%d", &numero);
	
	if (numero<0){
		printf("digite um numero positivo\n");
	}
	
}

printf("%d", numero);

return 0;
}