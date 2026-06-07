#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {

printf("************************************************************\n");
printf("*JEAN VINICIO RODOVALHO SOARES - 0024931                   *\n");
printf("Programa JVRS-15 - Quantas caixas cabem dentro do caminhao *\n");
printf("************************************************************\n");

int quantidade;
float hcaixa, ccaixa, lcaixa;
float hcaminhao, ccaminhao, lcaminhao;
float volumecaixa, volumecaminhao;

printf("!ATENCAO! PARA TODOS OS VALORES NESTE PROGRAMA UTILIZE CENTIMETROS!\n");

printf("Digite a altura da caixa: ");
scanf("%f", &hcaixa);
printf("Digite o comprimento da caixa: ");
scanf("%f", &ccaixa);
printf("Digite a largura da caixa: ");
scanf("%f", &lcaixa);

printf("Digite a altura do caminhao: ");
scanf("%f", &hcaminhao);
printf("Digite o comprimento do caminhao: ");
scanf("%f", &ccaminhao);
printf("Digite a largura do caminhao: ");
scanf("%f", &lcaminhao);

volumecaixa=ccaixa*lcaixa*hcaixa;
volumecaminhao=ccaminhao*lcaminhao*hcaminhao;

quantidade=volumecaminhao/volumecaixa;

printf("Cabem %d caixas no caminhao",quantidade);

}

