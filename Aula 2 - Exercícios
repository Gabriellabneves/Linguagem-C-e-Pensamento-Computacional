C e Pensamento Computacional - Aula 2
Aluna: Gabriella Barbosa 

Exercício 1
Eu:
#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, media
    printf("Digite a primeira nota");
    scanf("%f", &nota1);

    printf("Digite a segunda nota");
    scanf("%f", &nota2);

    printf("Digite a terceira nota");
    scanf("%f", &nota3);
    
    media = (nota1 + nota2 + nota3)/3
    printf(Sua média é: %.2f/n media;)
    return 0;
 
Correção com IA:

#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    // Correção principal: aspas fecham antes da vírgula e \n adicionado
    printf("Sua media e: %.2f\n", media); 
}


Exercício 2 
#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;
    printf("Sua media e: %.2f\n", media); 

    if (media >= 6)
        printf("Aluno aprovado\n");
    else 
        printf("Aluno reprovado\n");

    return 0;

Exercício 3
Eu:

#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Digite o primeiro numero");
    scanf("%d", &num1);

    printf("Digite o primeiro numero");
    scanf("%d", &num2);

    printf("Digite o primeiro numero");
    scanf("%d", &num3);

    if (num1>=num2&&num3)
    printf ("O maior numero é: \n,num1");

    elif (num2>=num1&&num3)
    printf ("O maior numero é: \n,num2");
    
    elif (num3>=num1&&num2)
    printf ("O maior numero é: \n,num3");
    
}
Correção com IA

#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Digite o primeiro numero");
    scanf("%d", &num1);

    printf("Digite o segundo numero");
    scanf("%d", &num2);

    printf("Digite o terceiro numero");
    scanf("%d", &num3);

   // Principal erro, aqui ele não compara o (num1) com o (num3), a forma correta seria fazer essas duas comparações de forma explicita como em: if (num1 >= num2 && num1 >= num3) 

    if (num1 >= num2 && num1 >= num3)
    printf("O maior numero é: %d\n", num1);

    // Na linguagem C não usa elif como em Python, se usa else if

    else if (num2 >= num1 && num2 >= num3)
    printf("O maior numero é: %d\n", num2);
    
    else if (num3 >= num2 && num3 >= num1)
    printf("O maior numero é: %d\n", num3);
}


Exercício 4 
eu: 

#include <stdio.h>

int main()
{
float salario;
float prestação;
float limite= (salario * 20) / 100;
printf("Digite seu salário\n");
scanf("%f", &salario);

printf("Digite o valor da prestação\n");
scanf("%f", &prestação);

if ("limite >=20.0 salario")
 printf("Emprestimo não concedido\n");

 else 
  printf("Emprestimo concedido\n");

return 0;

}

Correção com IA

#include <stdio.h>

int main()
{
float salario, prestação;

printf("Digite seu salário\n");
scanf("%f", &salario);

printf("Digite o valor da prestação\n");
scanf("%f", &prestação);

float limite = salario * 0.20;

if (prestação > limite) 
 printf("Emprestimo não concedido\n");

 else 
  printf("Emprestimo concedido\n");

return 0;
}

// Aqui a IA me explicou que, declarando o float limite lá em cima, ele ia rodar antes de receber os valores. 

Exercício 5 
eu: 

#include <stdio.h>

int main()
{
float altura, peso_ideal
char genero 

printf("Qual é o seu gênero? M para mulher e H para homem: "); 
scanf("% c", &genero);

printf("Qual é a sua altura em metros? Ex: 1.75): ")
scanf ("%f", altura);

if (genero == 'h' || genero =='H')
 peso_ideal = (72.7 ∗ altura) − 58); 
  printf("Seu peso ideal e: %.2f kg\n", peso_ideal;

 else (genero == 'm' || genero == 'M')
  peso_ideal = (62, 1 ∗ altura) − 44, 7);

  else if 
   printf("Gênero invalido! Use apenas H ou M.\n");

return 0;

}



Correção com IA  

#include <stdio.h>

int main()
{
float altura, peso_ideal;
char genero; 

printf("Qual é o seu gênero? M para mulher e H para homem: "); 
scanf(" %c", &genero);

printf("Qual é a sua altura em metros? Ex: 1.75): ");
scanf ("%f", &altura);

    if (genero == 'h' || genero =='H'){
     peso_ideal = (72.7 * altura) - 58; 
      printf("Seu peso ideal e: %.2f kg\n", peso_ideal);
    }
     else if (genero == 'm' || genero == 'M'){
       peso_ideal = (62.1 * altura) - 44.7;
        printf("Seu peso ideal é: %.2f kg\n", peso_ideal);
     }
         else   {
          printf("Gênero invalido! Use apenas H ou M.\n");
         }
return 0;

}
