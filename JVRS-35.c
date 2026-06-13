#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <string.h>
int main() {
setlocale(LC_ALL,"portuguese");

printf("***************************************************\n");
printf("*JEAN VINICIO RODOVALHO SOARES - 0024931          *\n");
printf("*Programa JVRS-35  Números de Fibonacci (n termos)*\n");
printf("***************************************************\n");

int n,  a = 0, b = 1, proximo, i;

printf("Quantos termos deseja mostrar? ");
scanf("%d", &n);

for(i = 1; i <= n; i++) {
    printf("%d ", a);

    proximo = a + b;
    a = b;
    b = proximo;
}


return 0;
}