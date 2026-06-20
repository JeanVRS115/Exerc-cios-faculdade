#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <string.h>
int main() {
setlocale(LC_ALL,"portuguese");
 
printf("**************************************************************\n");
printf("*JEAN VINICIO RODOVALHO SOARES - 0024931                     *\n");
printf("*Programa JVRS-58 A Calculadora de Bolso de 4 Operações      *\n");
printf("**************************************************************\n");

  float num1, num2;
    char operacao;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

	printf("Digite o segundo numero: ");
    scanf("%f", &num2);
	
    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &operacao);

    switch(operacao) {

        case '+':
            printf("Resultado = %.2f\n", num1 + num2);
            break;

        case '-':
            printf("Resultado = %.2f\n", num1 - num2);
            break;

        case '*':
            printf("Resultado = %.2f\n", num1 * num2);
            break;

        case '/':
            if(num2 != 0) {
                printf("Resultado = %.2f\n", num1 / num2);
            } else {
                printf("Erro: divisao por zero!\n");
            }
            break;

        default:
            printf("Operacao matematica nao reconhecida.\n");
    }

    return 0;
}