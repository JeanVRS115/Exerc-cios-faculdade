#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL,"portuguese");

    printf("************************************************\n");
    printf("*JEAN VINICIO RODOVALHO SOARES - 0024931       *\n");
    printf("Programa JVRS-30 Fatorial de um número         *\n");
    printf("************************************************\n");

    int numero, i;
    int fatorial = 1;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if(numero < 0){
        printf("Nao existe fatorial de numero negativo");
    }
    else{
        for(i = 1; i <= numero; i++){
            fatorial = fatorial * i;
        }

        printf("Fatorial de %d é %d", numero, fatorial);
    }

    return 0;
}