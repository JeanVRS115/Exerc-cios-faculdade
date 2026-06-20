#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <string.h>
int main() {
setlocale(LC_ALL,"portuguese");
 
printf("***********************************************************************\n");
printf("*JEAN VINICIO RODOVALHO SOARES - 0024931                              *\n");
printf("*Programa JVRS-55 Ler números e mostrar o maior (até digitar negativo)*\n");
printf("***********************************************************************\n");

  int numero;
    int maior = 0;

    do {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero > maior) {
            maior = numero;
        }

    } while (numero >= 0);

    printf("Maior numero informado: %d\n", maior);
    return 0;
}