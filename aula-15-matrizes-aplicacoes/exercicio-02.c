Ler uma matriz 2x3 e somar elementos - 


#include <stdio.h>

int main(void) {
    int matriz[2][3];
    int soma = 0;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite um valor: ");
            scanf("%d", &matriz[i][j]);

            soma += matriz[i][j];
        }
    }

    printf("Soma dos elementos: %d\n", soma);

    return 0;
}

O programa lê seis números e soma todos eles. Por exemplo, se tu digitar 1, 2, 3, 4, 5, 6, o resultado será 21.
