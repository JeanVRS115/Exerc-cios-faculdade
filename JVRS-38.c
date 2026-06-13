#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <string.h>
int main() {
setlocale(LC_ALL,"portuguese");

printf("***************************************************\n");
printf("*JEAN VINICIO RODOVALHO SOARES - 0024931          *\n");
printf("*Programa JVRS-38 Senha correta                   *\n");
printf("***************************************************\n");

//a senha é: alunointeligente

char senha[20];

while(strcmp(senha, "alunointeligente") != 0){
    printf("Digite a senha: ");
    scanf("%s", senha);

    if(strcmp(senha, "alunointeligente") != 0){
        printf("Acesso Negado\n");
    }
}

printf("Acesso Autorizado\n");

return 0;
}