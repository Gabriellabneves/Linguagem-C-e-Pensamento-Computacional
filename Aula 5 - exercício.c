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
