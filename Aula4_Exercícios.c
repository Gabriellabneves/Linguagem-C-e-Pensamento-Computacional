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

2) Um posto está vendendo combustíveis com a seguinte tabela de descontos: 

Álcool: 
até 20 litros, desconto de 3% por litro;
acima de 20 litros, desconto de 5% por litro.

Gasolina: até 20 litros, desconto de 4% por litro;
acima de 20 litros, desconto de 6% por litro.

Escreva um programa C que leia o número de litros vendidos, o tipo de combustível (codificado da seguinte forma: A-álcool, G-gasolina), calcule e imprima o valor a ser pago pelo cliente sabendo-se que o preço do litro da gasolina é R$ 2,50 o preço do litro do álcool é R$ 1,90.


3) Faça um programa que leia uma quantidade de segundos e converta esse valor para:
horas;
minutos;
segundos.
Exemplo:
Digite a quantidade de segundos: 3675
 
Horas: 1
Minutos: 1
Segundos: 15
 
