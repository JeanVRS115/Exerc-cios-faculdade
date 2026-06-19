#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <string.h>
int main() {
setlocale(LC_ALL,"portuguese");
 
printf("***********************************************************\n");
printf("*JEAN VINICIO RODOVALHO SOARES - 0024931                  *\n");
printf("*Programa JVRS-47  Tabuada de um número                   *\n");
printf("***********************************************************\n");

int i=0;
int numero;

printf("Digite um numero para tabuada: ");
scanf("%d", &numero);

while(i<=10){
	printf("%d X %d = %d\n", i, numero, i*numero);
	i++;
}

    return 0;
}