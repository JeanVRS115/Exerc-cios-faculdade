#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <string.h>
int main() {
setlocale(LC_ALL,"portuguese");
 
printf("**************************************************************\n");
printf("*JEAN VINICIO RODOVALHO SOARES - 0024931                     *\n");
printf("*Programa JVRS-57 A Central do Brinquedo Eletrônico          *\n");
printf("**************************************************************\n");

   char cor[20];

    printf("Digite a cor que acendeu: ");
    scanf("%s", cor);

    if (strcmp(cor, "Verde") == 0) {
        printf("O urso diz: Vamos brincar la fora!\n");
    }
    else if (strcmp(cor, "Amarelo") == 0) {
        printf("O urso diz: Estou ficando com soninho...\n");
    }
    else if (strcmp(cor, "Vermelho") == 0) {
        printf("O urso diz: Estou com fome, hora do lanche!\n");
    }
    else {
        printf("Cor desconhecida\n");
    }

    
    return 0;
}