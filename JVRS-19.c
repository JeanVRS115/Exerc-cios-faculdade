#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <string.h>
int main() {
setlocale(LC_ALL,"portuguese");

printf("************************************************\n");
printf("*JEAN VINICIO RODOVALHO SOARES - 0024931       *\n");
printf("Programa JVRS-20 *\n");
printf("************************************************\n");

int ano;

printf("Digite o ano para consultar se é bissexto ou não: ");
scanf("%d", &ano);

if (ano%400==0){
	printf("é um ano bissexto");
}
else if(ano%100==0){
	printf("não é um ano bissexto");
}
else if (ano%4==0){
	printf("é um ano bissexto");
}
else{
	printf("não é um ano bissexto");
}

return 0;
}

