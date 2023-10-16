#include <stdio.h>
#include <stdlib.h>

int main (){

float saque, saldo = 1200.0;
int opcao;

printf("BEM VINDO:\n");
printf("1 - SAQUE\n");
printf("2 - SALDO\n");

printf("Opção Desejada:\n");
scanf("%d", &opcao);

if (opcao == 1) {
        float saque;
        printf("INFORME O VALOR PARA SAQUE: ");
        scanf("%f", &saque);

        if (saque > 0 && saque <= saldo) {
            saldo -= saque;
            printf("SAQUE EFETUADO COM SUCESSO. SEU SALDO ATUAL É: %.2f\n", saldo);
        } else {
            printf("SALDO INSUFICIENTE.\n");
        }
    } else if (opcao == 2) {
        printf("O SEU SALDO ATUAL É DE: %.2f\n", saldo);
    } else {
        printf("OPÇÃO INVÁLIDA\n");
    }

    return 0;
}
