#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <string.h>
int main() {
setlocale(LC_ALL,"portuguese");

printf("************************************************\n");
printf("*JEAN VINICIO RODOVALHO SOARES - 0024931       *\n");
printf("Programa JVRS-21 Número positivo ou negativo   *\n");
printf("************************************************\n");

float valor;

printf("Digite o valor: ");
scanf("%f", &valor);

if(valor>0){
	printf("Seu valor é positivo");
}
else if (valor==0){
	printf("Seu valor é zero");
}
else{
	printf("Seu valor é negativo");
}

return 0;
}

