#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <string.h>
int main() {
setlocale(LC_ALL,"portuguese");

printf("************************************************\n");
printf("*JEAN VINICIO RODOVALHO SOARES - 0024931       *\n");
printf("Programa JVRS-23  Maior de dois números        *\n");
printf("************************************************\n");

int p1, p2;

printf("Digite uma das pontuações: ");
scanf("%d", &p1);
printf("Digite a outra pontuação: ");
scanf("%d", &p2);

if (p1>p2){
	printf("%d é a maior pontuação e %d é a menor pontuação", p1, p2);
}
else {
	printf("%d é a maior pontuação e %d é a menor pontuação", p2, p1);
}

return 0;
}