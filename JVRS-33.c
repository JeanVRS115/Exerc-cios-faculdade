#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <string.h>
int main() {
setlocale(LC_ALL,"portuguese");

printf("**************************************************\n");
printf("*JEAN VINICIO RODOVALHO SOARES - 0024931         *\n");
printf("*Programa JVRS-33 Múltiplos de 3 entre 1 e 30    *\n");
printf("**************************************************\n");

int a;

for(a=1;a<=10;a++){
	printf("%d\n", 3*a);
}
	
return 0;
}