1) Adapte o código para definir cheque especial, no final ele vai se juntar ao saldo.

#include <stdio.h>
#define LimiteCheque 10000

void exibirMenu() {
    printf("\n=== SISTEMA BANCÁRIO ===\n");
    printf("1. Consultar Saldo\n");
    printf("2. Depositar\n");
    printf("3. Sacar\n");
    printf("4. Sair\n");
    printf("Escolha uma opção: ");
    
}


int main() {
    int opcao;
    float saldo = 5000.0;
    float valor;
  
    
    do {
        exibirMenu();
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1:
                printf("Seu saldo atual é: R$ %.2f\n", saldo);
                printf("Limite Cheque Especial: R$ %d\n", LimiteCheque);
                printf("Saldo disponivel: %.2f\n", LimiteCheque + saldo);
                break;
            case 2:
                printf("Digite o valor para depósito: R$ ");
                scanf("%f", &valor);
                if (valor > 0) {
                    saldo += valor;
                    printf("Depósito realizado! Novo saldo: R$ %.2f\n", saldo);
                } else {
                    printf("Valor inválido!\n");
                }
                break;
            case 3:
                printf("Digite o valor para saque: R$ ");
                scanf("%f", &valor);
                if (valor > 0 && valor <= saldo + LimiteCheque) {
                    saldo -= valor;
                    printf("Saque realizado! Novo saldo: R$ %.2f\n", saldo);
                } else {
                    printf("Valor inválido ou saldo insuficiente!\n");
                }
                break;
            
            case 4:
                printf("Obrigado por usar nosso sistema!\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 4);
    
    return 0;
}



------------------------------------------------------------------------------
Lista de exercícios VIII - Linguagem C



Exercício 1 — Controle de consumo de energia elétrica



Uma empresa deseja monitorar o consumo de energia elétrica de uma instalação durante 7 dias. Desenvolva um programa em C que armazene em um vetor o consumo diário, em kWh.



Ao final, o programa deverá:

- Calcular o consumo total da semana.

- Calcular o consumo médio diário.

- Identificar o dia de maior consumo e seu respectivo valor.

- Contar quantos dias apresentaram consumo superior a 250 kWh.

Requisitos técnicos: utilize um vetor de 7 posições e uma estrutura de repetição para ler os dados e calcular os resultados.
    #include <stdio.h>

int main() {
    float consumo[7];
    float total = 0;
    float media;
    float maior;

    int i;
    int diaMaior;
    int contador = 0;

    
    for (i = 0; i < 7; i++) {
        printf("Digite o consumo do dia %d: ", i + 1);
        scanf("%f", &consumo[i]);

        total += consumo[i];

        if (i == 0 || consumo[i] > maior) {
            maior = consumo[i];
            diaMaior = i + 1;
        }

        if (consumo[i] > 250) {
            contador++;
        }
    }

    
    media = total / 7;

    
    printf("\nConsumo total: %.2f kWh\n", total);
    printf("Consumo medio: %.2f kWh\n", media);
    printf("Maior consumo: %.2f kWh\n", maior);
    printf("Dia de maior consumo: %d\n", diaMaior);
    printf("Dias acima de 250 kWh: %d\n", contador);

    return 0;
}
