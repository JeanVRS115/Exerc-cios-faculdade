#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <string.h>
int main() {
setlocale(LC_ALL,"portuguese");

printf("**************************************************\n");
printf("*JEAN VINICIO RODOVALHO SOARES - 0024931         *\n");
printf("*Programa JVRS-34  Verificar se um número é primo*\n");
printf("**************************************************\n");

int numero, i, divisores = 0;

printf("Digite um numero para verificar se ele é primo ou não: ");
scanf("%d", &numero);

    for(i=  1; i<=numero; i++){
 
    if(numero % i == 0) {
    divisores++;
    }
    }
    
	
	if(divisores == 2) {
        printf("O numero %d e primo.\n", numero);
    } else {
        printf("O numero %d nao e primo.\n", numero);
    }


return 0;
}