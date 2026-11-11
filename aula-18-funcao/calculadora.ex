
#include <stdio.h>

float somar(float num1, float num2) {
    return num1 + num2;
}

float subtrair(float num1, float num2) {
    return num1 - num2;
}

float multiplicar(float num1, float num2) {
    return num1 * num2;
}

float dividir(float num1, float num2) {
    return num1 / num2;
}

void exibirMenu() {
    printf("\n===== CALCULADORA =====\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("0 - Sair\n");
    printf("=======================\n");
}

int main() {
    int opcao;
    float num1, num2, resultado;

    do {
        exibirMenu();

        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {

            case 1:
                printf("Primeiro numero: ");
                scanf("%f", &num1);

                printf("Segundo numero: ");
                scanf("%f", &num2);

                resultado = somar(num1, num2);
                printf("\nResultado: %.2f\n", resultado);
                break;

            case 2:
                printf("Primeiro numero: ");
                scanf("%f", &num1);

                printf("Segundo numero: ");
                scanf("%f", &num2);

                resultado = subtrair(num1, num2);
                printf("\nResultado: %.2f\n", resultado);
                break;

            case 3:
                printf("Primeiro numero: ");
                scanf("%f", &num1);

                printf("Segundo numero: ");
                scanf("%f", &num2);

                resultado = multiplicar(num1, num2);
                printf("\nResultado: %.2f\n", resultado);
                break;

            case 4:
                printf("Primeiro numero: ");
                scanf("%f", &num1);

                printf("Segundo numero: ");
                scanf("%f", &num2);

                if (num2 == 0) {
                    printf("\nErro! Nao e possivel dividir por zero.\n");
                } else {
                    resultado = dividir(num1, num2);
                    printf("\nResultado: %.2f\n", resultado);
                }
                break;

            case 0:
                printf("\nCalculadora encerrada. Ate mais!\n");
                break;

            default:
                printf("\nOpcao invalida! Tente novamente.\n");
        }

    } while (opcao != 0);

    return 0;
}

O programa realiza operações de soma, subtração, multiplicação e divisão. Utiliza funções para cada operação, um menu com switch para escolher a opção e um laço do while para repetir os cálculos até o usuário escolher sair. Também verifica se a divisão é por zero.
