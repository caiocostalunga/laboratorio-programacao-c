#include <stdio.h>

int calcularFatorial(int numero) {
    int fatorial = 1;

    for (int i = 1; i <= numero; i++) {
        fatorial *= i;
    }

    return fatorial;
}

int main() {
    int numero, resultado;

    printf("===== CALCULADORA DE FATORIAL =====\n\n");

    printf("Digite um numero entre 0 e 12: ");
    scanf("%d", &numero);

    if (numero >= 0 && numero <= 12) {
        resultado = calcularFatorial(numero);

        printf("\nFatorial de %d = %d\n", numero, resultado);
    } else {
        printf("\nNumero invalido! Digite um valor entre 0 e 12.\n");
    }

    return 0;
}

O programa solicita ao usuário um número inteiro entre 0 e 12. Em seguida, utiliza a função calcularFatorial(), que recebe o número informado e utiliza uma estrutura de repetição for para multiplicar os valores de 1 até o número escolhido, calculando seu fatorial. O resultado é retornado para a função principal (main) e apresentado na tela. Caso o usuário digite um número fora do intervalo permitido, o programa exibe uma mensagem de erro.
