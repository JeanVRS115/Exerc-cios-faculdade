#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <string.h>
int main() {
setlocale(LC_ALL,"portuguese");
 
printf("****************************************************\n");
printf("*JEAN VINICIO RODOVALHO SOARES - 0024931           *\n");
printf("*Programa JVRS-40 Tabuada com while                *\n");
printf("****************************************************\n");

int numero, i = 1;

printf("Digite um numero: ");
scanf("%d", &numero);

while(i <= 10){
    printf("%d x %d = %d\n", numero, i, numero * i);
    i++;
}

return 0;
}
