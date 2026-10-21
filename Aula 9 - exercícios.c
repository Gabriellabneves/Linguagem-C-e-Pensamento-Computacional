
Lista de exercícios VII



1) Controle de vendas de uma loja



Uma loja deseja acompanhar as vendas realizadas durante sete dias. Desenvolva um programa que armazene em um vetor o valor das vendas de cada dia.

Ao final, o programa deverá:

- Calcular o total vendido na semana;

- Calcular a média diária de vendas;

- Identificar o dia com maior valor de vendas;

- Contar quantos dias tiveram vendas superiores a R$ 1.000,00.
  

Exercício 1





#include <stdio.h>



int main() {

  float vendas[7];

  float total = 0, media;

  int i, maiorDia = 0, quantidade = 0;



  for (i = 0; i < 7; i++) {

    printf("Digite as vendas do dia %d: R$ ", i + 1);

    scanf("%f", &vendas[i]);

    total += vendas[i];



    if (vendas[i] > 1000) {

      quantidade++;

    }



    if (i == 0 || vendas[i] > vendas[maiorDia]) {

      maiorDia = i;

    }

  }

   

  media = total / 7;



  printf("\nTotal vendido: R$ %.2f\n", total);

  printf("Media diaria: R$ %.2f\n", media);

  printf("Dia com maior venda: %d\n", maiorDia + 1);

  printf("Dias com vendas acima de R$ 1000: %d\n", quantidade);



  return 0;

}


2) Exibição em ordem inversa. 

Leia 6 números inteiros, armazene-os em um vetor e exiba os valores na ordem inversa àquela em que foram digitados.




Exercício 2





#include <stdio.h>



int main() {

  int numeros[6];

  int i;



  for (i = 0; i < 6; i++) {

    printf("Digite o numero %d: ", i + 1); // Adicionado %d

    scanf("%d", &numeros[i]);

  }



  printf("\nNumeros na ordem inversa:\n");



  for (i = 5; i >= 0; i--) {

    printf("%d ", numeros[i]); // Adicionado espaco entre os numeros

  }

  printf("\n");



  return 0;

}


3) Sistema de cálculo de desconto em compras

Uma loja deseja automatizar o cálculo de descontos concedidos aos clientes. Desenvolva um programa que solicite o valor de uma compra e utilize uma função chamada calcularDesconto() para calcular o desconto.

Regras:

- Compras abaixo de R$ 100,00: sem desconto.

- Compras de R$ 100,00 até R$ 499,99: desconto de 5%.

- Compras a partir de R$ 500,00: desconto de 10%.

Crie também uma função calcularValorFinal() para retornar o valor da compra após o desconto. Ao final, apresente o valor original, o desconto e o valor final.




Exercício 3





#include <stdio.h>



float calcularDesconto(float valor) {

  if (valor < 100) {

    return 0;

  } else if (valor < 500) {

    return valor * 0.05; // Corrigido para 0.05

  } else {

    return valor * 0.10;

  }

}



float calcularValorFinal(float valor, float desconto) {

  return valor - desconto;

}



int main() { // Corrigido de float main() para int main()

  float valor, desconto, valorFinal;



  printf("Digite o valor da compra: R$ ");

  scanf("%f", &valor);



  desconto = calcularDesconto(valor);

  valorFinal = calcularValorFinal(valor, desconto);



  printf("\nValor original: R$ %.2f\n", valor);

  printf("Desconto: R$ %.2f\n", desconto);

  printf("Valor final: R$ %.2f\n", valorFinal);



  return 0;

}


4) Controle de aprovação de alunos

Uma instituição de ensino deseja automatizar a classificação dos estudantes. Elabore um programa que leia três notas de um aluno e utilize uma função chamada calcularMedia() para calcular a média aritmética.

Crie uma função verificarSituacao() que receba a média e retorne:

- 1 para aprovado, se a média for maior ou igual a 7;

- 2 para recuperação, se a média for maior ou igual a 5 e menor que 7;

- 3 para reprovado, se a média for menor que 5.

O programa principal deverá exibir a média e a situação final do aluno.


Exercício 4





#include <stdio.h>



float calcularMedia(float n1, float n2, float n3) {

  return (n1 + n2 + n3) / 3;

}



int verificarSituacao(float media) {

  if (media >= 7) {

    return 1;

  } else if (media >= 5) {

    return 2;

  } else {

    return 3;

  }

}



int main() {

  float n1, n2, n3, media;

  int situacao;



  printf("Digite a primeira nota: ");

  scanf("%f", &n1);

  printf("Digite a segunda nota: ");

  scanf("%f", &n2);

  printf("Digite a terceira nota: ");

  scanf("%f", &n3);



  media = calcularMedia(n1, n2, n3);

  situacao = verificarSituacao(media);



  printf("\nMedia: %.2f\n", media);



  if (situacao == 1) {

    printf("Situacao: Aprovado\n");

  } else if (situacao == 2) {

    printf("Situacao: Recuperacao\n");

  } else {

    printf("Situacao: Reprovado\n");

  }



  return 0;

}


5) Identificação de números repetidos

Uma empresa precisa identificar valores duplicados em uma lista de registros numéricos. Leia 10 números inteiros e armazene-os em um vetor.

O programa deverá identificar e exibir os números que aparecem mais de uma vez, evitando mostrar o mesmo número repetido várias vezes na saída.

Desafio: comparar os elementos do vetor utilizando dois laços de repetição.


Exercício 5 





#include <stdio.h>



int main() {

  int numeros[10];

  int i, j;

  int repetido;



  for (i = 0; i < 10; i++) {

    printf("Digite o %dº numero: ", i + 1);

    scanf("%d", &numeros[i]);

  }



  printf("\nNumeros que se repetem:\n");



  for (i = 0; i < 10; i++) {

    repetido = 0;

    for (j = 0; j < i; j++) {

      if (numeros[i] == numeros[j]) {

        repetido = 1;

        break;

      }

    }

    if (!repetido) {

      for (j = i + 1; j < 10; j++) {

        if (numeros[i] == numeros[j]) {

          printf("%d ", numeros[i]);

          break;

        }

      }

    }

  }

  printf("\n");



  return 0;

}





  printf("\nNumeros que se repetem:\n");



  for (i = 0; i < 10; i++) {

    repetido = 0;

    for (j = 0; j < i; j++) {

      if (numeros[i] == numeros[j]) {

        repetido = 1;

        break;

      }

    }



    if (!repetido) {

      for (j = i + 1; j < 10; j++) {

        if (numeros[i] == numeros[j]) {

          printf("%d ", numeros[i]);

          break;

        }

      }

    }

  }

  printf("\n");



  return 0;

}
