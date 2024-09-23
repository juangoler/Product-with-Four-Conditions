//À vista em dinheiro ou cheque, recebe 20% de desconto = var x1;
//À vista no cartão de crédito, recebe 5% de desconto = var x2;
//Em duas vezes, preço normal de etiqueta sem juros = var x3;
//Em duas vezes, preço normal de etiqueta mais juros de 10% = var x4;

#include <stdio.h>

int main()
{
    float value, x1, x2, x3, x4;
    
    printf("Digite o preço do produto: ");
    scanf("%f", &value);
    
    x1 = value - (value * 0.20);

    x3 = value;

    x2 = value - (value * 0.05);

    x4 = value + (value * 0.10);

    printf("À vista em dinheiro ou cheque, recebe vinte porcento de desconto;\nValor: %.2f\n\n", x1);
    printf("À vista no cartão de crédito, recebe de cinco porcento de desconto;\nValor: %.2f\n\n", x2);
    printf("Em duas vezes, preço normal de etiqueta sem juros;\nValor: %.2f\n\n", x3);
    printf("Em duas vezes, preço normal de etiqueta mais juros de dez por cento;\nValor: %.2f\n\n", x4);

    return 0;
}