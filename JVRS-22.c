#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <string.h>
int main() {
setlocale(LC_ALL,"portuguese");

printf("************************************************\n");
printf("*JEAN VINICIO RODOVALHO SOARES - 0024931       *\n");
printf("Programa JVRS-22 Par ou ímpar                  *\n");
printf("************************************************\n");

int numero;

printf("Digite o numero: ");
scanf("%d", &numero);

if(numero % 2 == 0){
	printf("Seu valor é par");
}

else{
	printf("Seu numero é ímpar");
}

return 0;
}

