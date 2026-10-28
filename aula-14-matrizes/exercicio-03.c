Somar os elementos de uma matriz 3x3 - 
#include <stdio.h>

int main(void) {
    int matriz[3][3];
    int soma = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o valor da linha %d, coluna %d: ",
                   i + 1, j + 1);
            scanf("%d", &matriz[i][j]);

            soma += matriz[i][j];
        }
    }

    printf("\nA soma dos elementos da matriz e: %d\n", soma);

    return 0;
}
