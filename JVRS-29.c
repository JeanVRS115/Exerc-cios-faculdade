#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <string.h>
int main() {
setlocale(LC_ALL,"portuguese");

printf("************************************************\n");
printf("*JEAN VINICIO RODOVALHO SOARES - 0024931       *\n");
printf("*Programa JVRS-29 Números pares de 0 a 50      *\n");
printf("************************************************\n");

int a;

for(a=1;a<=50;a++){
   if(a%2==0){
      printf("%d\n",a);
   }
}

return 0;
}