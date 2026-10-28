Contar valores pares em uma matriz 3×3 - 


#include <stdio.h>

int main(void) {
    int matriz[3][3] = {
        {2, 5, 8},
        {3, 4, 7},
        {6, 9, 10}
    };

    int pares = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] % 2 == 0) {
                pares++;
            }
        }
    }

    printf("Quantidade de numeros pares: %d\n", pares);

    return 0;
}

Saída esperada: Quantidade de numeros pares: 5
O operador % calcula o resto da divisão. Se matriz[i][j] % 2 == 0, o número é par. O contador pares aumenta a cada número par encontrado.
