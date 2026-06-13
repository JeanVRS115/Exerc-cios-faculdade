#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <string.h>
int main() {
setlocale(LC_ALL,"portuguese");
 
printf("***********************************************************\n");
printf("*JEAN VINICIO RODOVALHO SOARES - 0024931                  *\n");
printf("*Programa JVRS-44                 *\n");
printf("***********************************************************\n");

 int numero, contador = 0;

    printf("Digite um numero positivo: ");
    scanf("%d", &numero);

    while(numero > 0){
        contador++;
        numero = numero / 10;
    }

    printf("O numero possui %d digitos.\n", contador);

    return 0;
}