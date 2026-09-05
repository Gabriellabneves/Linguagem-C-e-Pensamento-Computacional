#include <stdio.h>
#include <math.h>

int main()
{
    float area, litros, valorTotal;
    int latas;
    printf("Sistema de Calculo de Tintas\n\n");
    printf("Informe a área a ser pintada em metros quadrados:");
    scanf("%f",&area);
    
    litros = area / 3;

    latas =  (int)ceil(litros/18);
    
    valorTotal = latas * 80;
    
    printf("\n Quantidade de litros necessários: %.2f\n", litros);
    printf("\n Quantidade de lata(s): %d\n", latas);
    printf("\n Preço total: R$ %.2f\n", valorTotal);
    
    return 0;
}
