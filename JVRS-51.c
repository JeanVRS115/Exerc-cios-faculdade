#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <string.h>
int main() {
setlocale(LC_ALL,"portuguese");
 
printf("***********************************************************\n");
printf("*JEAN VINICIO RODOVALHO SOARES - 0024931                  *\n");
printf("*Programa JVRS-51 Contagem regressiva de 10 até 1         *\n");
printf("***********************************************************\n");

int i=10;

do {
	printf("%d\n", i);
	i--;
	
}
while (i >= 1);
	
    return 0;
}