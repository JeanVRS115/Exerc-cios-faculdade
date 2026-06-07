#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <string.h>
int main() {
setlocale(LC_ALL,"portuguese");

printf("************************************************\n");
printf("*JEAN VINICIO RODOVALHO SOARES - 0024931       *\n");
printf("Programa JVRS-19 Ordem crescente (três números)*\n");
printf("************************************************\n");

int p1, p2, p3;

printf("Digite a pontuação 1: ");
scanf("%d", &p1);
printf("Digite a pontuação 2: ");
scanf("%d", &p2);
printf("Digite a pontuação 3: ");
scanf("%d", &p3);

if (p1<p2 && p1<p3){
	if(p2<p3){
		printf("%d, %d, %d", p1, p2, p3);
	}
	else{
		printf("%d, %d, %d", p1, p3, p2);
	}
}
else if (p2<p1 && p2<p3){
	if(p1<p3){
		printf("%d, %d, %d", p2, p1, p3);
	}
	else{
		printf("%d, %d, %d", p2, p3, p1);
	}
}
else{
	if(p1<p2){
		printf("%d, %d, %d", p3, p1, p2);
	}
	else{
		printf("%d, %d, %d", p3, p2, p1);
	}
}

return 0;
}

