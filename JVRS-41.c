#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <string.h>
int main() {
setlocale(LC_ALL,"portuguese");
 
printf("****************************************************\n");
printf("*JEAN VINICIO RODOVALHO SOARES - 0024931           *\n");
printf("*Programa JVRS-41 Número primo com while           *\n");
printf("****************************************************\n");

int numero, i = 1, divisores = 0;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    while(i <= numero){
        if(numero % i == 0){
            divisores++;
        }

        i++;
    }

    if(divisores == 2){
        printf("O numero %d e primo.\n", numero);
    }
    else{
        printf("O numero %d nao e primo.\n", numero);
    }

return 0;
}
