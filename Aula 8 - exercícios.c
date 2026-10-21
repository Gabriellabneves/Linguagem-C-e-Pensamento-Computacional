#include <stdio.h>



int main() {

    int numeros[] = {5, 10, 15, 20, 25};

    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    int soma = 0;

    

    for (int i = 0; i < tamanho; i++) {

        soma += numeros[i];

    }

    

    float media = (float)soma / tamanho;

    printf("A média dos números é: %.2f\n", media);

    

    return 0;

}





Switch Case

—-------------------------------------------------------------------------------------

#include <stdio.h>



int main() {

    int opcao;

    

    printf("Menu:\n");

    printf("1 - Novo jogo\n");

    printf("2 - Carregar jogo\n");

    printf("3 - Sair\n");

    printf("Escolha uma opção: ");

    scanf("%d", &opcao);

    

    switch(opcao) {

        case 1:

            printf("Você escolheu iniciar um novo jogo.\n");

            break;

        case 2:

            printf("Você escolheu carregar um jogo salvo.\n");

            break;

        case 3:

            printf("Saindo do jogo. Até logo!\n");

            break;

        default:

            printf("Opção inválida.\n");

            break;

    }

    

    return 0;

}



—-------------------------------------------------------------------------------------

Laço de repetição (While)



#include <stdio.h>



int main() {

    int contador = 1;

    int soma = 0;

    

    printf("Calculando a soma dos números de 1 a 10:\n");

    

    // Enquanto contador for menor ou igual a 10, executa o bloco

    while (contador <= 10) {

        printf("Adicionando %d à soma\n", contador);

        soma += contador; // acumula o valor do contador na soma

        contador++; // incrementa o contador para avançar o loop

    }

    

    printf("Soma total: %d\n", soma);

    return 0;

}





—-------------------------------------------------------------------------------------

(Coloquei para fatorar 10!  

precisei trocar a variável fatorar para 1 e não para 0 como é na soma, já que 0*1 seria 0 e assim por diante. Se mantesse o 0 o valor seria 0, já que eu fatorei de fato o resultado da 3.628.800)





#include <stdio.h>



int main() {

    int contador = 1;

    int fatorar = 1;

    

    printf("Calculando a soma dos números de 1 a 10:\n");

    

    // Enquanto contador for menor ou igual a 10, executa o bloco

    while (contador <= 10) {

        printf("Adicionando %d à fatorar\n", contador);

        fatorar *= contador; // acumula o valor do contador na soma

        contador++; // incrementa o contador para avançar o loop

    }

    

    printf("Soma total: %d\n", fatorar);

    return 0;

}

—-------------------------------------------------------------------------------------

 do while





#include <stdio.h>



int main() {

    int numero, tentativas = 0;

    const int numero_secreto = 42;

    

    printf("Jogo de Adivinhação!\n");

    printf("Tente adivinhar o número entre 1 e 100:\n");

    

    do {

        printf("Digite um número: ");

        scanf("%d", &numero);

        tentativas++;

        

        if (numero < numero_secreto) {

            printf("Muito baixo! Tente novamente.\n");

        } else if (numero > numero_secreto) {

            printf("Muito alto! Tente novamente.\n");

        } else {

            printf("Parabéns! Você acertou em %d tentativas!\n", tentativas);

        }

    } while (numero != numero_secreto);

    

    return 0;

}



—-------------------------------------------------------------------------------------

Exercício em sala 



do while 

colocar limite de tentativas



#include <stdio.h>



int main() {

    int numero = 0;

    int tentativas = 0;

    const int numero_secreto = 42;



    printf("=== Jogo de Adivinhacao ===\n");

    printf("Tente adivinhar o numero entre 1 e 100 em ate 5 tentativas:\n\n");



    do {

        tentativas++;



        printf("Tentativa %d de 5", tentativas);

        if (tentativas == 5) {

            printf(" (Ultima tentativa!)");

        }



        printf("\nDigite um numero: ");



        // Trata caso o usuario digite uma letra por engano

        if (scanf("%d", &numero) != 1) {

            printf("Entrada invalida! Digite apenas numeros.\n\n");

            while (getchar() != '\n'); // Limpa o buffer de entrada

            tentativas--; // Nao gasta a tentativa do jogador

            continue;

        }



        if (numero < numero_secreto) {

            printf("Muito baixo! Tente novamente.\n\n");

        } else if (numero > numero_secreto) {

            printf("Muito alto! Tente novamente.\n\n");

        } else {

            printf("Parabens! Voce acertou em %d tentativa(s)!\n", tentativas);

        }



    } while (numero != numero_secreto && tentativas < 5);



    // Mensagem exibida apenas se o jogador perder

    if (numero != numero_secreto) {

        printf("Que pena! Voce esgotou suas tentativas. O numero secreto era %d.\n", numero_secreto);

    }



    return 0;

}



—-------------------------------------------------------------------------------------



#include <stdio.h>



int main() {

    printf("Números de 1 a 10:\n");

    

    for (int i = 1; i <= 10; i++) {

        printf("%d ", i);

    }

    

    printf("\n");

    return 0;

}



Ex: 2



#include <stdio.h>



int main() {

    int soma = 0;

    

    for (int i = 1; i <= 100; i++) {

        soma += i; // soma = soma + i

    }

    

    printf("A soma dos números de 1 a 100 é: %d\n", soma);

    return 0;

}



Ex: 3



#include <stdio.h>



int main() {

    int soma = 0;

    

    for (int i = 1; i <= 100; i++) {

        soma += i; // soma = soma + i

    }

    

    printf("A soma dos números de 1 a 100 é: %d\n", soma);

    return 0;

}





EX: 4



#include <stdio.h>



int main() {

    int numeros[] = {5, 10, 15, 20, 25};

    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    int soma = 0;

    

    for (int i = 0; i < tamanho; i++) {

        soma += numeros[i];

    }

    

    float media = (float)soma / tamanho;

    printf("A média dos números é: %.2f\n", media);

    

    return 0;}

—-------------------------------------------------------------------------------------

Exercício em sala



Atividade IV

Exercício em laboratório 

1) Elaborar um programa em C que imprima a soma dos números pares de 1 a 20. Utilize a estrutura de repetição while ou do/while. 



#include <stdio.h>



int main() {

    int soma = 0;

    int contador = 1;



    while (contador <= 20) {

        if (contador % 2 == 0) {

            soma = soma + contador;

        }

        contador++;

    }



    printf("O resultado da soma é: %d\n", soma);



    return 0;

}









2) Elaborar um programa em C que receba dois números inteiros e gere os números inteiros que estão no intervalo compreendido por eles. 

Exemplo: Entrada 2 e 6 

     Saída: 3, 4, 5 



#include <stdio.h>



int main() {

   int num1,num2,i;

   printf("digite o primeiro número:");

   scanf ("%d",&num1);

    printf("digite o primeiro número:");

    scanf("%d", &num2);

   

    for (i = numero1 +1 ; i < numero2 ; i++ ){

        printf ("%d",i);

    }

   

    return 0;

}







3) Escreva um programa em C que calcule a média dos números digitados pelo usuário, se eles forem ímpares. Termina a leitura se o usuário digitar zero(0).





#include <stdio.h>



int main() {

    int numero;

    int somaImpares = 0;

    int quantidadeImpares = 0;

    float media;



    printf("Digite varios numeros inteiros (digite 0 para encerrar):\n");



    do {

        printf("Digite um numero: ");

        scanf("%d", &numero);



        if (numero % 2 != 0) {

            somaImpares += numero;

            quantidadeImpares++;

        }



    } while (numero != 0);



    if (quantidadeImpares > 0) {

        media = (float)somaImpares / quantidadeImpares;

        printf("\nVoce digitou %d numero(s) impar(es).\n", quantidadeImpares);

        printf("A media dos numeros impares e: %.2f\n", media);

    } else {

        printf("\nNenhum numero impar foi digitado.\n");

    }



    return 0;

}





4) Faça um programa em C que permita ao usuário digitar as notas de vários alunos.

Para cada aluno, o programa deverá:

Solicitar uma nota de 0 a 10.
Informar a situação do aluno:
Aprovado: nota maior ou igual a 7;
Recuperação: nota maior ou igual a 5 e menor que 7;
Reprovado: nota menor que 5.
Continuar solicitando novas notas.
A leitura deverá terminar quando o usuário digitar -1.
Ao final, apresentar:
quantidade de alunos aprovados;
quantidade de alunos em recuperação;
quantidade de alunos reprovados;
média geral das notas.




#include <stdio.h>



int main()

{

    int aprovados=0,reprovados=0, recuperacao=0,counter=0;

    float soma=0, nota;

    do{

    printf("Nota aluno\n");

    scanf("%f", &nota);

    

    if (nota>= 7 ){

    printf("Aprovado\n");

    aprovados++;}



    

    else if (nota>= 5){

        printf("Recuperação\n");

        recuperacao++;

    }

    

    else if (nota>=0){

    printf("Reprovado\n");

    reprovados++;}

    

    else if (nota<-1){

    printf("Nota invalida\n");

    counter--;

    soma-=nota;

    }

    

    if (nota==-1){

        counter--;

        soma-=nota;

    }

    



soma+=nota;

counter++;

    

}while(nota!=-1);

printf("----- RESULTADO -----");

printf("\nAprovados: %d", aprovados);

printf("\nRecuperacao: %d", recuperacao);

printf("\nReprovados: %d", reprovados);

printf("\nMedia geral: %.2f", soma/counter);

    return 0;

}





 

 

×
