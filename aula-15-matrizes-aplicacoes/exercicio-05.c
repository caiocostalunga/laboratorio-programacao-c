Identificar o maior valor da matriz - 


#include <stdio.h>

int main(void) {
    int matriz[3][3] = {
        {12, 5, 8},
        {23, 4, 7},
        {6, 19, 10}
    };

    int maior = matriz[0][0];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }

    printf("Maior valor: %d\n", maior);

    return 0;
}


Saída esperada: Maior valor: 23
A variável maior começa com o primeiro elemento da matriz. Sempre que o programa encontra um número maior que o valor atual, ele atualiza a variável.
