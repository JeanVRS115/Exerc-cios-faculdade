#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <string.h>
int main() {
setlocale(LC_ALL,"portuguese");

printf("************************************************\n");
printf("*JEAN VINICIO RODOVALHO SOARES - 0024931       *\n");
printf("*Programa JVRS-31    Contagem regressiva       *\n");
printf("************************************************\n");

int a;

for(a=1;a<=10;a++){
	printf("%d² = %d \n", a, a*a);
}
	
return 0;
}