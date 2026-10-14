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
