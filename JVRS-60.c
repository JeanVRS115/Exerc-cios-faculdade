#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <string.h>
int main() {
setlocale(LC_ALL,"portuguese");
 
printf("**************************************************************\n");
printf("*JEAN VINICIO RODOVALHO SOARES - 0024931                     *\n");
printf("*Programa JVRS-60 O Validador de Dias Úteis                  *\n");
printf("**************************************************************\n");

 int dia;

    printf("Digite um numero de 1 a 7: ");
    scanf("%d", &dia);

    switch(dia) {

        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            printf("Dia Util. Acesso liberado para o trabalho.\n");
            break;

        case 1:
        case 7:
            printf("Fim de Semana. Predio fechado.\n");
            break;

        default:
            printf("Numero de dia invalido.\n");
    }

    return 0;
}