#include <stdio.h>

float maiorPreco(float preco1, float preco2) {
    if (preco1 > preco2) {
        return preco1;
    } else {
        return preco2;
    }
}

int main() {
    float preco1, preco2, maior;

    printf("===== COMPARADOR DE PRECOS =====\n");

    printf("\nPreco 1: ");
    scanf("%f", &preco1);

    printf("Preco 2: ");
    scanf("%f", &preco2);

    if (preco1 == preco2) {
        printf("\nOs dois precos sao iguais!\n");
    } else {
        maior = maiorPreco(preco1, preco2);
        printf("\nMaior preco: R$ %.2f\n", maior);
    }

    return 0;
}

O programa solicita os preços de dois produtos e utiliza a função maiorPreco() para identificar qual possui o maior valor. Caso os preços sejam iguais, informa ao usuário. Caso contrário, apresenta o maior preço na tela.
