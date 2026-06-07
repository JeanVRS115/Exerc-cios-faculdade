#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <string.h>
int main() {
setlocale(LC_ALL,"portuguese");

printf("**********************************************\n");
printf("*JEAN VINICIO RODOVALHO SOARES - 0024931     *\n");
printf("Programa JVRS-18 Login simples               *\n");
printf("**********************************************\n");

//O Usuário será "aluno" e a senha será "1234".

char usuario[10];
int senha;

printf("Digite o Usuário: ");
scanf("%s", usuario);
printf("Digite a senha: ");
scanf("%d", &senha);

if (strcmp(usuario, "aluno") == 0 && senha == 1234){
	printf("Acesso permitido");
}
else{
	printf("Acesso negado");
}

return 0;
}

