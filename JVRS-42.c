#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <string.h>
int main() {
setlocale(LC_ALL,"portuguese");
 
printf("***********************************************************\n");
printf("*JEAN VINICIO RODOVALHO SOARES - 0024931                  *\n");
printf("*Programa JVRS-42 Quantidade de números ímpares digitados *\n");
printf("***********************************************************\n");

 int numero, i = 1, impares = 0;

    while(i <= 10) {
        printf("Digite o %d numero: ", i);
        scanf("%d", &numero);

        if(numero % 2 != 0) {
            impares++;
        }

        i++;
    }

    printf("Quantidade de numeros impares: %d\n", impares);

return 0;
}
