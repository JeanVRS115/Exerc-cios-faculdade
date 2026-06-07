#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <string.h>
int main() {
setlocale(LC_ALL,"portuguese");

printf("************************************************\n");
printf("*JEAN VINICIO RODOVALHO SOARES - 0024931       *\n");
printf("*Programa JVRS-27  Tabuada de um número       *\n");
printf("************************************************\n");

int a, numero;

printf("Digite um número: ");
scanf("%d", &numero);

for (a=0;a<=10;a++){
	printf("%d X %d = %d \n",numero, a, numero*a);
}


return 0;
}