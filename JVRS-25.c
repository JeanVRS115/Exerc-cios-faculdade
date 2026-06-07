#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <string.h>
int main() {
setlocale(LC_ALL,"portuguese");

printf("************************************************\n");
printf("*JEAN VINICIO RODOVALHO SOARES - 0024931       *\n");
printf("Programa JVRS-26  Contar de 1 a 10             *\n");
printf("************************************************\n");

int a;

for (a=0;a<=10;a++){
	printf("%d\n",a);
}


return 0;
}