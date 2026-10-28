Reserva de assentos no cinema - 

#include <stdio.h>

int main(void) {
    int assentos[3][4] = {
        {1, 0, 1, 0},
        {0, 1, 0, 0},
        {1, 1, 0, 1}
    };

    int ocupados = 0;
    int disponiveis = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (assentos[i][j] == 1) {
                ocupados++;
            } else {
                disponiveis++;
            }
        }
    }

    printf("Mapa de assentos:\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", assentos[i][j]);
        }
        printf("\n");
    }

    printf("\nAssentos ocupados: %d\n", ocupados);
    printf("Assentos disponiveis: %d\n", disponiveis);

    return 0;
}


Mapa de assentos:
1 0 1 0
0 1 0 0
1 1 0 1

Assentos ocupados: 6
Assentos disponiveis: 6
