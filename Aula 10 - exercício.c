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
