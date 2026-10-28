ATIVIDADE AVALIATIVA II — PROGRAMAÇÃO EM C
Nível intermediário | Laços de repetição, funções e vetores

A atividade contém três problemas baseados em situações do mundo real. Cada exercício exige a elaboração de um programa completo em linguagem C, utilizando vetores, estruturas de repetição e funções.

EXERCÍCIO 1 — MONITORAMENTO DE ABASTECIMENTO

Uma transportadora deseja controlar o consumo de combustível de um caminhão durante 10 viagens. Para cada viagem, será registrada a quantidade de litros de combustível consumidos.

Desenvolva um programa em C que armazene os consumos em um vetor de números reais.

O programa deverá:
1. Ler o consumo de combustível das 10 viagens.
2. Calcular o consumo total de combustível.
3. Calcular o consumo médio por viagem.
4. Identificar a viagem com maior consumo e apresentar seu número e valor.
5. Contar quantas viagens tiveram consumo superior a 50 litros.
6. Exibir os consumos na ordem inversa àquela em que foram informados.

Requisitos técnicos:
- Utilize um vetor float consumo[10].
- Implemente a função calcularTotal() para retornar o consumo total.
- Implemente a função calcularMedia() para retornar o consumo médio.
- Implemente a função contarViagens() para retornar a quantidade de viagens com consumo superior a 50 litros.
- Utilize laços de repetição para leitura, processamento e exibição dos dados.

Critérios avaliados: vetores, acumuladores, comparação de valores, funções e percursos em ordem inversa.


#include <stdio.h>
#define quantidade 10

int main() {
    float consumo[10];
    float total, media;
    int maiorViagem = 0;
    int acimaDe50;

float calcularTotal(float consumo[10]) {
    float total = 0;

    for (int i = 0; i < quantidade; i++) {
        total += consumo[i];
    }

    return total;
}

float calcularMedia(float consumo[10]) {
    return calcularTotal(consumo) / quantidade;
}

int contarViagens(float consumo[10]) {
    int contador = 0;

    for (int i = 0; i < quantidade; i++) {
        if (consumo[i] > 50) {
            contador++;
        }
    }

    return contador;
}

    for (int i = 0; i < quantidade; i++) {
        printf("Digite o consumo da viagem %d: ", i + 1);
        scanf("%f", &consumo[i]);
    }

    
    total = calcularTotal(consumo);
    media = calcularMedia(consumo);
    acimaDe50 = contarViagens(consumo);

    for (int i = 1; i < quantidade; i++) {
        if (consumo[i] > consumo[maiorViagem]) {
            maiorViagem = i;
        }
    }

    printf("\n---- RESULTADOS ----\n");
    printf("Consumo total: %.2f litros\n", total);
    printf("Consumo medio: %.2f litros\n", media);
    printf("Viagem com maior consumo: %d\n",
           maiorViagem + 1);
    printf("Maior consumo: %.2f litros\n",
           consumo[maiorViagem]);
    printf("Viagens acima de 50 litros: %d\n",
           acimaDe50);

   
    printf("\n---- ORDEM INVERSA ----\n");

    for (int i = quantidade - 1; i >= 0; i--) {
        printf("Viagem %d: %.2f litros\n",
               i + 1, consumo[i]);
    }

    return 0;
}





EXERCÍCIO 2 — ANÁLISE DE DESEMPENHO ACADÊMICO

Uma instituição de ensino deseja analisar o desempenho de uma turma com 12 alunos. Para simplificar o exercício, cada aluno receberá uma nota inteira entre 0 e 10.

Desenvolva um programa em C que armazene as notas em um vetor de números inteiros.

O programa deverá:
1. Ler e validar as notas dos 12 alunos, aceitando somente valores entre 0 e 10.
2. Calcular a média da turma.
3. Contar quantos alunos foram aprovados, considerando nota maior ou igual a 7.
4. Identificar a maior e a menor nota.
5. Contar quantos alunos obtiveram nota acima da média da turma.
6. Exibir todas as notas na ordem em que foram cadastradas.

Requisitos técnicos:
- Utilize um vetor int notas[12].
- Implemente a função calcularMedia() para retornar a média da turma.
- Implemente a função contarAprovados() para retornar o número de alunos aprovados.
- Implemente a função encontrarMaiorNota() para retornar a maior nota.
- Implemente a função contarAcimaMedia() para contar as notas superiores à média.
- Utilize laços de repetição e estruturas condicionais para processar os dados.

Regra importante: caso o usuário informe uma nota inválida, o programa deverá solicitar novamente a nota do mesmo aluno.

Critérios avaliados: validação de entradas, funções com parâmetros e retorno, média aritmética e contagem condicional.


  #include <stdio.h>

int main() {
    int notas[12];
    int i;
    int maior, menor;
    int aprovados, acimaMedia;
    float media;

float calcularMedia(int notas[12]) {
    float soma = 0;
    int i;

    for (i = 0; i < 12; i++) {
        soma = soma + notas[i];
    }

    return soma / 12;
}

int contarAprovados(int notas[12]) {
    int contador = 0;
    int i;

    for (i = 0; i < 12; i++) {
        if (notas[i] >= 7) {
            contador++;
        }
    }

    return contador;
}

int encontrarMaiorNota(int notas[12]) {
    int maior = notas[0];
    int i;

    for (i = 1; i < 12; i++) {
        if (notas[i] > maior) {
            maior = notas[i];
        }
    }

    return maior;
}

int contarAcimaMedia(int notas[12], float media) {
    int contador = 0;
    int i;

    for (i = 0; i < 12; i++) {
        if (notas[i] > media) {
            contador++;
        }
    }

    return contador;
}

    for (i = 0; i < 12; i++) {
        do {
            printf("Digite a nota do aluno %d (0 a 10): ", i + 1);
            scanf("%d", &notas[i]);

            if (notas[i] < 0 || notas[i] > 10) {
                printf("Nota invalida! Digite uma nota entre 0 e 10.\n");
            }

        } while (notas[i] < 0 || notas[i] > 10);
    }

    media = calcularMedia(notas);

    aprovados = contarAprovados(notas);

    maior = encontrarMaiorNota(notas);
    menor = notas[0];

    for (i = 1; i < 12; i++) {
        if (notas[i] < menor) {
            menor = notas[i];
        }
    }

    acimaMedia = contarAcimaMedia(notas, media);

    printf("\n--- RESULTADOS DA TURMA ---\n");
    printf("Media da turma: %.2f\n", media);
    printf("Alunos aprovados: %d\n", aprovados);
    printf("Maior nota: %d\n", maior);
    printf("Menor nota: %d\n", menor);
    printf("Alunos acima da media: %d\n", acimaMedia);

    printf("\n--- NOTAS DOS ALUNOS ---\n");

    for (i = 0; i < 12; i++) {
        printf("Aluno %d: %d\n", i + 1, notas[i]);
    }

    return 0;
}




EXERCÍCIO 3 — CONTROLE DE MOVIMENTAÇÃO DE ESTOQUE

Uma loja de equipamentos eletrônicos possui 10 produtos cadastrados. Cada posição de um vetor representa a quantidade disponível em estoque de um produto.

Desenvolva um programa em C que permita registrar as quantidades iniciais e, em seguida, realizar operações de entrada e saída de produtos.

O programa deverá:
1. Ler a quantidade inicial dos 10 produtos.
2. Exibir um menu com as opções: consultar estoque, registrar entrada, registrar saída e encerrar o programa.
3. Permitir que o usuário informe o número do produto e a quantidade movimentada.
4. Atualizar o estoque após cada operação.
5. Impedir saídas superiores à quantidade disponível e impedir quantidades negativas ou iguais a zero nas movimentações.
6. Ao consultar o estoque, exibir a quantidade de cada produto, o total de unidades armazenadas e quantos produtos estão sem estoque.

Requisitos técnicos:
- Utilize um vetor int estoque[10].
- Implemente a função exibirMenu() para apresentar as opções.
- Implemente a função registrarEntrada() para atualizar o estoque de um produto.
- Implemente a função registrarSaida() para validar e atualizar uma saída.
- Implemente a função calcularTotalEstoque() para retornar a soma das quantidades.
- Implemente a função contarProdutosZerados() para retornar a quantidade de produtos sem estoque.
- Utilize um laço de repetição para manter o menu ativo até que o usuário escolha encerrar.

Regra importante: os produtos serão identificados pelos números de 1 a 10, embora os índices do vetor variem de 0 a 9. O programa deverá validar o número informado antes de acessar o vetor.

Critérios avaliados: menu interativo, do while, switch, funções, atualização de vetores e validação de operações.


 #include <stdio.h>

void exibirMenu() {
    printf("\n--- CONTROLE DE ESTOQUE ---\n");
    printf("1 - Consultar estoque\n");
    printf("2 - Registrar entrada\n");
    printf("3 - Registrar saida\n");
    printf("4 - Encerrar programa\n");
    printf("Escolha uma opcao: ");
}

void registrarEntrada(int estoque[10]) {
    int produto, quantidade;

    printf("Digite o numero do produto (1 a 10): ");
    scanf("%d", &produto);

    if (produto < 1 || produto > 10) {
        printf("Numero de produto invalido!\n");
        return;
    }

    printf("Digite a quantidade de entrada: ");
    scanf("%d", &quantidade);

    if (quantidade <= 0) {
        printf("A quantidade deve ser maior que zero!\n");
        return;
    }

    estoque[produto - 1] = estoque[produto - 1] + quantidade;

    printf("Entrada registrada com sucesso!\n");
}

void registrarSaida(int estoque[10]) {
    int produto, quantidade;

    printf("Digite o numero do produto (1 a 10): ");
    scanf("%d", &produto);

    if (produto < 1 || produto > 10) {
        printf("Numero de produto invalido!\n");
        return;
    }

    printf("Digite a quantidade de saida: ");
    scanf("%d", &quantidade);

    if (quantidade <= 0) {
        printf("A quantidade deve ser maior que zero!\n");
        return;
    }

    if (quantidade > estoque[produto - 1]) {
        printf("Estoque insuficiente!\n");
        return;
    }

    estoque[produto - 1] = estoque[produto - 1] - quantidade;

    printf("Saida registrada com sucesso!\n");
}

int calcularTotalEstoque(int estoque[10]) {
    int total = 0;
    int i;

    for (i = 0; i < 10; i++) {
        total = total + estoque[i];
    }

    return total;
}

int contarProdutosZerados(int estoque[10]) {
    int contador = 0;
    int i;

    for (i = 0; i < 10; i++) {
        if (estoque[i] == 0) {
            contador++;
        }
    }

    return contador;
}

int main() {
    int estoque[10];
    int i;
    int opcao;
    int total, zerados;
    
    for (i = 0; i < 10; i++) {
        do {
            printf("Digite a quantidade inicial do produto %d: ", i + 1);
            scanf("%d", &estoque[i]);

            if (estoque[i] < 0) {
                printf("A quantidade nao pode ser negativa!\n");
            }

        } while (estoque[i] < 0);
    }

    do {
        exibirMenu();
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\n--- ESTOQUE ATUAL ---\n");

                for (i = 0; i < 10; i++) {
                    printf("Produto %d: %d unidades\n",
                           i + 1, estoque[i]);
                }

                total = calcularTotalEstoque(estoque);
                zerados = contarProdutosZerados(estoque);

                printf("Total de unidades: %d\n", total);
                printf("Produtos sem estoque: %d\n", zerados);
                break;

            case 2:
                registrarEntrada(estoque);
                break;

            case 3:
                registrarSaida(estoque);
                break;

            case 4:
                printf("Programa encerrado!\n");
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
        }

    } while (opcao != 4);

    return 0;
} 
