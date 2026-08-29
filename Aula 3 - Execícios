•	O valor pago por um Hotel da Praia de Iracema para seus porteiros é de R$ 10,25 por hora de trabalho.
Faça um programa que pergunte ao usuário quantas horas ele trabalhou e imprima na tela o valor do salário a ser recebido por ele.

//Horas Trabalhadas
#include <stdio.h>

int main()
{
    float hTrabalhadas, salario;
    printf("Quantas horas você trabalhou?\n");
    scanf("%f",&hTrabalhadas);
    
    salario = hTrabalhadas * 10.25;
    
    printf("Você vai receber %.2f\n de salário", salario);

    return 0;
}


•	Sabendo que na Faculdade ABC a média mínima é 7,0 e a tolerância de faltas é 15 % da carga horária do curso,
faça um programação em C que peça as informações necessárias e informe a situação do usuário.

//APROVADO OU REPROVADO

#include <stdio.h>



int main()

{

    float media, cargaH, faltas, percentualFaltas;

    printf("Sistema Academico Faculdade ABC\n");

    

    printf("Informe sua média: ");

    scanf("%f", &media);

    

    printf("Informe a carga horária: ");

    scanf("%f", &cargaH);

    

    printf("Informe o seu número de faltas: ");

    scanf("%f",&faltas);

    

    percentualFaltas = (faltas / cargaH) * 100;

    

    printf ("\n --- Resultado ---\n");

    printf("Média: %.2f\n", media);

    printf("Percentual de faltas: %.2f\n", percentualFaltas);

    

    if (media>= 7.0 && percentualFaltas <= 15.0)

        printf("Situação: APROVADO\n");

    else printf("Situação: REPROVADO\n");

    

    return 0;

}


•	Construa um programação em C que peça o Nome, Endereço, Sexo, Cidade, Estado, Idade dos funcionários.
Além disto, dado o Salário Bruto do funcionário, calcule o seu Salário Líquido.
Considere que os descontos podem ser o Vale Transporte (2%), Vale Alimentação (5%) e Plano de Saúde (10%).

//PRIMEIRA PARTE
//EU
int main()
{
    float salarioBruto, salarioLiquido, valeTrans, valeAlim, planoSaude, descontos;
    char sexo, nome[30], endereco[60], cidade, estado[3];
    int idade;

    printf("Sistema de Benefícios\n");
    
    printf("Informe seu nome: ");
    scanf("%s",&nome);
    
    printf("Informe sua idade: ");
    scanf("%d",&idade);
    
    printf("Informe seu sexo: ");
    scanf("%s",&sexo);
    
    printf("Informe seu estado: ");
    scanf("%s",&estado);
    
    printf("Informe sua cidade: ");
    scanf("%s",&cidade);
    
    printf("Informe seu endereço: ");
    scanf("%s",&endereco);

    printf("Informe seu salário bruto: ");
    scanf("%f",&salarioBruto);

    
    return 0;
}

//PRIMEIRA PARTE COM CORREÇÃO DA IA

#include <stdio.h> // Corrigido aqui

int main()
{
    float salarioBruto, salarioLiquido, valeTrans, valeAlim, planoSaude;
    char sexo;
    char nome[30], endereco[60], cidade[30], estado[3];
    int idade;

    printf("Sistema de Beneficios\n");
    
    printf("Informe seu nome: ");
    scanf(" %[^\n]", nome);
    
    printf("Informe sua idade: ");
    scanf("%d", &idade);
    
    printf("Informe seu sexo (M/F): ");
    scanf(" %c", &sexo);
    
    printf("Informe seu estado (ex: SP): ");
    scanf(" %2s", estado); // %2s garante que serão lidos no máximo 2 caracteres
    
    printf("Informe sua cidade: ");
    scanf(" %[^\n]", cidade);
    
    printf("Informe seu endereço: ");
    scanf(" %[^\n]", endereco);

    printf("Informe seu salário bruto: ");
    scanf("%f", &salarioBruto);

    return 0;
}



//SEGUNDA PARTE
//EU

valeTrans = 2% * salarioBruto; 
valeAlim= 5% * salarioBruto;
planoSaude=10% *  salarioBruto; 

totalDescontos = valeTrans + valeAlim + planoSaude;
salarioLiquido = salarioBruto - totalDescontos;
    

printf("Total de Descontos: R$ %.2f\n", totalDescontos);
printf("SALARIO LIQUIDO: R$ %.2f\n", salarioLiquido);





//SEGUNDA PARTE COM CORREÇÃO DA IA

valeTrans     = salarioBruto * 0.02f; // 2% de desconto
    valeAlim      = salarioBruto * 0.05f; // 5% de desconto
    planoSaude    = salarioBruto * 0.10f; // 10% de desconto

    totalDescontos = valeTrans + valeAlim + planoSaude;
    salarioLiquido = salarioBruto - totalDescontos;
    

    printf("Total de Descontos: R$ %9.2f\n", totalDescontos);
    printf("SALARIO LIQUIDO: R$ %9.2f\n", salarioLiquido);


//CÓDIGO CORRIGIDO E FUNCIONANDO 

#include <stdio.h> // Corrigido aqui

int main()
{
    float salarioBruto, salarioLiquido, valeTrans, valeAlim, planoSaude, totalDescontos;
    char sexo;
    char nome[30], endereco[60], cidade[30], estado[3];
    int idade;

    printf("Sistema de Benefícios\n");
    
    printf("Informe seu nome: ");
    scanf(" %[^\n]", nome);
    
    printf("Informe sua idade: ");
    scanf("%d", &idade);
    
    printf("Informe seu sexo (M/F): ");
    scanf(" %c", &sexo);
    
    printf("Informe seu estado (ex: SP): ");
    scanf(" %2s", estado); 
    
    printf("Informe sua cidade: ");
    scanf(" %[^\n]", cidade);
    
    printf("Informe seu endereço: ");
    scanf(" %[^\n]", endereco);

    printf("Informe seu salário bruto: ");
    scanf("%f", &salarioBruto);
    
    valeTrans     = salarioBruto * 0.02f; // 2% de desconto
    valeAlim      = salarioBruto * 0.05f; // 5% de desconto
    planoSaude    = salarioBruto * 0.10f; // 10% de desconto

    totalDescontos = valeTrans + valeAlim + planoSaude;
    salarioLiquido = salarioBruto - totalDescontos;
    
    printf("\n=========================================\n");
    printf("           DEMONSTRATIVO DE PAGAMENTO    \n");
    printf("=========================================\n");
    printf("Funcionario : %s (%c, %d anos)\n", nome, sexo, idade);
    printf("Endereco    : %s\n", endereco);
    printf("Localidade  : %s / %s\n", cidade, estado);
    printf("-----------------------------------------\n");
    printf("Salario Bruto           : R$ %9.2f\n", salarioBruto);
    printf("(-) Vale Transporte (2%%): R$ %9.2f\n", valeTrans);
    printf("(-) Vale Alimentacao (5%%): R$ %9.2f\n", valeAlim);
    printf("(-) Plano de Saúde (10%%): R$ %9.2f\n", planoSaude);
    printf("-----------------------------------------\n");
    printf("Total de Descontos      : R$ %9.2f\n", totalDescontos);
    printf("SALÁRIO LÍQUIDO         : R$ %9.2f\n", salarioLiquido);
    printf("=========================================\n");

    return 0;
}

