Criar e exibir uma matriz 2x2 - 
  #include <stdio.h>

int main(void) {
    int matriz[2][2] = {
        {1, 2},
        {3, 4}
    };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

Saída esperada: 
1  2 
3  4
