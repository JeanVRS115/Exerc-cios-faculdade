#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {

printf("*********************************************\n");
printf("*JEAN VINICIO RODOVALHO SOARES - 0024931    *\n");
printf("Programa JVRS-17 O Sensor do Parque Temático*\n");
printf("*********************************************\n");


int altura;

printf("Digite a altura do usuário: ");
scanf("%d", &altura);

if (altura>140){
	printf("ACENDA LUZ VERDE");

}
else {
	printf("ACENDA LUZ VERMELHA");
}

return 0;
}

