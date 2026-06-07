#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <string.h>
int main() {
setlocale(LC_ALL,"portuguese");

printf("***********************************************************\n");
printf("*JEAN VINICIO RODOVALHO SOARES - 0024931                  *\n");
printf("*Programa JVRS-28 Soma dos 100 primeiros números naturais *\n");
printf("***********************************************************\n");

int a, numero;

numero=1;

for (a=0;a<=99;a++){
	printf("%d + %d = %d \n",numero, a, numero+a);
}


return 0;
}