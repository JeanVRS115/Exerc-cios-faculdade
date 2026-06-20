#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <string.h>
int main() {
setlocale(LC_ALL,"portuguese");
 
printf("***********************************************************\n");
printf("*JEAN VINICIO RODOVALHO SOARES - 0024931                  *\n");
printf("*Programa JVRS-54 Validar número entre 1 e 5              *\n");
printf("***********************************************************\n");

  
    int numero;

    do {
        printf("Digite um numero entre 1 e 5: ");
        scanf("%d", &numero);

        if (numero < 1 || numero > 5) {
            printf("Numero invalido. Tente novamente.\n");
        }

    } while (numero < 1 || numero > 5);

    printf("Numero valido!\n");

    return 0;
}