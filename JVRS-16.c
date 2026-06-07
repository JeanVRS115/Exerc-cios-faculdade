#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {

printf("*********************************************\n");
printf("*JEAN VINICIO RODOVALHO SOARES - 0024931    *\n");
printf("Programa JVRS-16 - Múltiplo de 3 e/ou 5      *\n");
printf("*********************************************\n");

int pedido;

printf("Digite  numero do seu pedido: ");
scanf("%d", &pedido);


if (pedido%3 == 0 && pedido%5 == 0){
	printf("Voce ganhou um refrigerante e uma sobremesa de brinde");
}

else if (pedido%3 == 0){
	printf("Voce ganhou um refrigerante");

}

else if (pedido%5 == 0){
	printf("Voce ganhou uma sobremesa");
}

else {
	printf("Seu pedido nao foi premiado");

}

}

