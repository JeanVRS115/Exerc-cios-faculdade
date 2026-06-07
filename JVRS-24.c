#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <string.h>
int main() {
setlocale(LC_ALL,"portuguese");

printf("************************************************\n");
printf("*JEAN VINICIO RODOVALHO SOARES - 0024931       *\n");
printf("Programa JVRS-24 Pode votar?                   *\n");
printf("************************************************\n");

int idade;

printf("Digite sua idade: ");
scanf("%d", &idade);

if (idade>=16){
	printf("Você tem idade para votar");
}
else {
	printf("Você não tem idade para votar");
}

return 0;
}