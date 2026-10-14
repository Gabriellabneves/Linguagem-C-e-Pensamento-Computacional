LISTA DE EXERCÍCIO VI



1) Escreva um programa em C que solicite ao usuário 5 números inteiros, armazene-os em um vetor(array) e, utilizando um laço de repetição (for), calcule e exiba a soma dos números pares. 

Exemplo: 

Digite o 1o número: 5

Digite o 2o número: 4

Digite o 3o número: 8

Digite o 4o número: 3

Digite o 5o número: 1



Saída: A soma dos números pares = 12.
int main() {
    int numeros[5];
    int somaPares = 0;

    for (int i = 0; i < 5; i++) {
        printf("Digite o %do número: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    for (int i = 0; i < 5; i++) {
        
        if (numeros[i] % 2 == 0) {
            somaPares += numeros[i];
        }
    }
    
    printf("\nSaída: A soma dos números pares = %d.\n", somaPares);

    return 0;
}


2) Escreva um programa em Linguagem C que solicite ao usuário 5 números inteiros e os armazene em um vetor (array).

Em seguida, utilizando um laço de repetição (for) e estruturas condicionais (if), o programa deve percorrer o vetor e identificar:

1.O maior número digitado.
2.O menor número digitado.

#include <stdio.h>

int main() {
    int numeros[5];
    int maior, menor;

  
    for (int i = 0; i < 5; i++) {
        printf("Digite o %do número: ", i + 1);
        scanf("%d", &numeros[i]);
    }

   
    maior = numeros[0];
    menor = numeros[0];

  
    for (int i = 1; i < 5; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    printf("\nResultados:\n");
    printf("O maior número digitado = %d\n", maior);
    printf("O menor número digitado = %d\n", menor);

    return 0;
}


3) Escreva um programa em Linguagem C que contenha uma função chamada calcularDobro.

A função deve receber um número inteiro como parâmetro, calcular e retornar o dobro desse valor. Na função principal (main), solicite um número ao usuário, chame a função calcularDobro e exiba o resultado retornado na tela.

#include <stdio.h>

int calcularDobro(int num){
    return num *2;
}

int main()
{
    int dobro, numero;
    
    printf("Digite um número inteiro...: ");
    scanf("%d" , &numero);
    dobro = calcularDobro(numero);
    printf("O dobro de %d é: %d\n", numero, dobro);
    

    return 0;
}



4) Você foi designado para desenvolver o protótipo de uma calculadora básica em Linguagem C. Para garantir a organização e modularidade do código, a lógica de cada operação matemática deve ser isolada em funções específicas.

Escreva um programa que exiba um menu de opções, solicite ao usuário a operação desejada e os dois números operandos. Em seguida, utilize a estrutura switch/case para chamar a função correspondente e exibir o resultado na tela.



Requisitos do Programa:

Criação das Funções:
float somar(float a, float b) — retorna a soma dos dois números.
float subtrair(float a, float b) — retorna a diferença.
float multiplicar(float a, float b) — retorna o produto.
float dividir(float a, float b) — retorna a divisão (tratar divisão por zero).
Estrutura do Menu e Seleção:
Apresentar o seguinte menu no terminal:
1. Somar
2. Subtrair
3. Multiplicar
4. Dividir
 
Utilizar a estrutura switch/case para direcionar a execução com base na opção escolhida pelo usuário.
Tratar opções inválidas utilizando a cláusula default.


Exemplo de Execução Esperada no Terminal

======================================
        CALCULADORA EM C - UDF        
======================================
 
1. Somar
2. Subtrair
3. Multiplicar
4. Dividir
 
Escolha a operacao desejada (1-4): 4
Digite o primeiro numero: 15.0
Digite o segundo numero: 3.0
 
--------------------------------------
Resultado da divisao: 5.00
======================================




#include <stdio.h>

float somar(float a, float b){
    return a + b;
}

float subtrair(float a, float b){
    return a - b;
}

float dividir(float a, float b){
    return a / b;
}

float multiplicar(float a, float b){
    return a * b;
}

int main()
{
  int operador;
  float num1, num2, resultado;
  
  printf("_____Calculadora em C_____\n\n");
  
  printf("1.Somar\n");
  printf("2.Subtrair\n");
  printf("3.Dividir\n");
  printf("4.Multiplicar\n");
  printf("0.Sair\n");
  printf("\n Escolha a operação da calculadora (1-4): ");
  scanf("%d",&operador);
  
  if (operador==0)
    return 0;
  printf("Digite o primeiro número...:");
  scanf("%f",&num1);
  printf("Digite o segundo número...:");
  scanf("%f",&num2);
  
  switch (operador){
      case 1:
            resultado = somar(num1,num2);
            printf("Resultado da soma é %.2f\n", resultado);
             break;
            
      case 2: 
            resultado = subtrair(num1,num2);;
             printf("Resultado da subtração é %.2f\n", resultado);
             break;
            
      case 3: 
            resultado = dividir(num1,num2);
             printf("Resultado da divisão é %.2f\n", resultado);
             break;
                 
      case 4: 
            resultado = multiplicar(num1,num2);
             printf("Resultado da multiplicação é %.2f\n", resultado);
             break;
                 
      default:
           case 0: 
             printf("Opção invalida!");
            
            
    
  }
 

    return 0;
}
