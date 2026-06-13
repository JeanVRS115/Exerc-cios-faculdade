#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <string.h>
int main() {
setlocale(LC_ALL,"portuguese");

printf("***************************************************\n");
printf("*JEAN VINICIO RODOVALHO SOARES - 0024931          *\n");
printf("*Programa JVRS-36  Contar até 10 com while        *\n");
printf("***************************************************\n");

int i = 1;

while (i<=10){
 	printf("%d\n", i);
	i++;
	
}

return 0;
}