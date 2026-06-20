#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <string.h>
int main() {
setlocale(LC_ALL,"portuguese");
 
printf("**************************************************************\n");
printf("*JEAN VINICIO RODOVALHO SOARES - 0024931                     *\n");
printf("*Programa JVRS-59 O Assistente de Direção (GPS Sem Mapa)     *\n");
printf("**************************************************************\n");

 char direcao;

    printf("Digite uma direcao (N, S, L ou O): ");
    scanf(" %c", &direcao);

    switch(direcao) {

        case 'N':
            printf("Seguir para o Norte.\n");
            break;

        case 'S':
            printf("Seguir para o Sul.\n");
            break;

        case 'L':
            printf("Virar a Leste (Direita).\n");
            break;

        case 'O':
            printf("Virar a Oeste (Esquerda).\n");
            break;

        default:
            printf("Comando invalido! Pare o robo.\n");
    }

    return 0;
}