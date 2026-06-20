#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <string.h>
int main() {
setlocale(LC_ALL,"portuguese");
 
printf("***********************************************************\n");
printf("*JEAN VINICIO RODOVALHO SOARES - 0024931                  *\n");
printf("*Programa JVRS-52 Soma até o número ser múltiplo de 10    *\n");
printf("***********************************************************\n");

 int numero, soma = 0;

    do {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        soma += numero;

    } while (numero % 10 != 0);

    printf("Soma total = %d\n", soma);

    return 0;
}