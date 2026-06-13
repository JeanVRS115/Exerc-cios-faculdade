#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <string.h>
int main() {
setlocale(LC_ALL,"portuguese");
 
printf("***********************************************************\n");
printf("*JEAN VINICIO RODOVALHO SOARES - 0024931                  *\n");
printf("*Programa JVRS-43 Soma dos pares entre 1 e 100            *\n");
printf("***********************************************************\n");


    setlocale(LC_ALL,"portuguese");

    int i = 1, soma = 0;

    while(i <= 100) {

        if(i % 2 == 0) {
            soma = soma + i;
        }

        i++;
    }

    printf("A soma dos numeros pares entre 1 e 100 e: %d\n", soma);

    return 0;
}