1) Faça um programa em C para uma loja de tintas. O programa deverá pedir o tamanho em metros quadrados da área a ser pintada.
Considere que a cobertura da tinta é de 1 litro para cada 3 metros quadrados e que a tinta é vendida em latas de 18 litros, que custam R$ 80,00.
Informe ao usuário a quantidades de latas de tinta a serem compradas e o preço total.

#include <math.h>

latas = (int)ceil(litros / 18);

Como não podemos comprar 1,85 lata, por exemplo, precisamos de 2 latas. Com isso a função ceil arredonda o número de latas para cima.

EU: 
#include <stdio.h>


int main()
{ 
  setlocale(LC_ALL, "");
   
  float area, litros, precoTotal;
  int latas; 
   
  printf("Digite a área a ser pintada em metros quadrados: ");
  scanf("%f", &area);
   
  litros = area / 3.0;
  latas = (int)ceil(litros / 18.0);
  precoTotal = latas * 80.0;
   
  printf("Resumo do Pedido\n");
  printf("Área informada: %.2f metros quadrados\n", area);
  printf("Litros de tinta necessários: %.2f L\n", litros);
  printf("Quantidade de latas: %d\n", latas);
  printf("Preço total: R$ %.2f\n", precoTotal);

  return 0;
}


Corrigido com IA
#include <stdio.h>
#include <math.h>  // Necessário para a função ceil()
#include <locale.h> // Necessário para a função setlocale()

int main()
{ 
  setlocale(LC_ALL, "");
   
  float area, litros, precoTotal;
  int latas; 
   
  printf("Digite a área a ser pintada em metros quadrados: ");
  scanf("%f", &area);
   
  litros = area / 3.0f;
  latas = (int)ceil(litros / 18.0f);
  precoTotal = latas * 80.0f;
   
  printf("\n --- Resumo do Pedido--- \n");
  printf("Área informada: %.2f metros quadrados\n", area);
  printf("Litros de tinta necessários: %.2f L\n", litros);
  printf("Quantidade de latas: %d\n", latas);
  printf("Preço total: R$ %.2f\n", precoTotal);

  return 0;
}


Álcool: 
até 20 litros, desconto de 3% por litro;
acima de 20 litros, desconto de 5% por litro.

Gasolina: até 20 litros, desconto de 4% por litro;
acima de 20 litros, desconto de 6% por litro.

Escreva um programa C que leia o número de litros vendidos, o tipo de combustível (codificado da seguinte forma: A-álcool, G-gasolina), calcule e imprima o valor a ser pago pelo cliente sabendo-se que o preço do litro da gasolina é R$ 2,50 o preço do litro do álcool é R$ 1,90.

EU: 
#include <stdio.h>
#include <math.h> // Necessário para a função ceil()
#include <locale.h> // Necessário para a função setlocale()

int main()
{ 
 setlocale(LC_ALL, "");
 char tipo;
 float litros, valor, desconto, total;
  
  printf("---Bem vindo ao Posto UDF---\n");
  printf("Veja nossa tabela de desconto:\n ");
  printf("Álcool: até 20 litros, desconto de (3%) por litro; acima de 20 litros, desconto de (5%) por litro.\n");
  printf("Gasolina: até 20 litros, desconto de (4%) por litro; acima de 20 litros, desconto de (6%) por litro.\n");

  printf("Informa o tipo de combustivel: (Digite A para Àlcool ou G para Gasolina)");
  scanf(" %c", &tipo);
   
  printf("Informe a quantidade em litros: ");
  scanf("%f", &litros);
   
  if (tipo=='A'||tipo=='a'){
    valor = 1.90;
    if (litros <= 20) {
      desconto=0.03;}
     
    else (desconto=0.05);
    }
     
  else if (tipo=='G'|| tipo=='g'){
    valor = 2.50;
    if(litros <= 20){
      desconto=0.04;}
       
      else desconto=0.06;}
  }
  else {
    printf("Tipo de combustível inválido!\n");
    return 1;
    }
     
    total = litros (valor * (1.0 - desconto));
  printf("\nValor total a pagar: %.2f\n", total);
   
   
   
  return 0;
}


Correção com IA: 

#include <stdio.h>
#include <math.h> 
#include <locale.h> 

int main()
{ 
  setlocale(LC_ALL, "");
  char tipo;
  float litros, valor = 0, desconto = 0, total; // Boa prática: inicializar variáveis
  
  printf("---Bem vindo ao Posto UDF---\n");
  printf("Veja nossa tabela de desconto:\n ");
  printf("Álcool: até 20 litros, desconto de (3%%) por litro; acima de 20 litros, desconto de (5%%) por litro.\n");
  printf("Gasolina: até 20 litros, desconto de (4%%) por litro; acima de 20 litros, desconto de (6%%) por litro.\n\n");

  printf("Informe o tipo de combustivel: (Digite A para Álcool ou G para Gasolina): ");
  scanf(" %c", &tipo);
   
  printf("Informe a quantidade em litros: ");
  scanf("%f", &litros);
   
  if (tipo == 'A' || tipo == 'a') {
    valor = 1.90;
    if (litros <= 20) {
      desconto = 0.03;
    } else {
      // CORREÇÃO 1: Removidos os parênteses desnecessários da atribuição
      desconto = 0.05; 
    }
  } 
  else if (tipo == 'G' || tipo == 'g') {
    valor = 2.50;
    if (litros <= 20) {
      desconto = 0.04;
    } else {
      desconto = 0.06;
    } 
    // CORREÇÃO 2: Removida a chave '}' extra que ficava aqui e quebrava o 'else' seguinte
  }
  else {
    // Agora este 'else' pertence corretamente ao 'if (tipo == ...)'
    printf("Tipo de combustível inválido!\n");
    return 1;
  }
     
  // CORREÇÃO 3: Adicionado o operador '*' de multiplicação entre 'litros' e o bloco entre parênteses
  total = litros * (valor * (1.0 - desconto));
   
  printf("\nValor total a pagar: R$ %.2f\n", total);
   
  return 0;
}


3) Faça um programa que leia uma quantidade de segundos e converta esse valor para:
horas;
minutos;
segundos.
Exemplo:
Digite a quantidade de segundos: 3675
 
Horas: 1
Minutos: 1
Segundos: 15
 



EU: 

#include <stdio.h>
#include <math.h> 
#include <locale.h> 

int main()
{ 
  setlocale(LC_ALL, "");
 float quantidade_segundo, TotalH, TotalM, TotalS;

  printf ("Digite a quantidade de segundos: \n");
  scanf("%f",&quantidade_segundo);

  TotalH = quantidade_segundo / 3600.0;
  TotalM = quantidade_segundo / 60.0;
  TotalS = quantidade_segundo;
   

  printf("\nHoras:%2f", TotalH);
  printf("\nMinutos:%2f", TotalM);
  printf("\nSegundos:%2f", TotalS);
   
  return 0;
}

Correção com IA: 

#include <stdio.h>
#include <locale.h> 

int main()
{ 
  setlocale(LC_ALL, "");
  int total_segundos, horas, minutos, segundos;

  printf("Digite a quantidade de segundos: \n");
  scanf("%d", &total_segundos);

  // Divisão inteira: descarta as casas decimais
  horas = total_segundos / 3600; 
   
  // O operador % pega o RESTO da divisão
  minutos = (total_segundos % 3600) / 60; 
  segundos = total_segundos % 60; 

  // %d é usado para imprimir inteiros
  printf("\nTempo formatado: %02dh %02dm %02ds\n", horas, minutos, segundos);
   
  return 0;
}
