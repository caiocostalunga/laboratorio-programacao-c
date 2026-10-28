Ler quatro valores e exibir a matriz - 
  #include <stdio.h>

int main(void) {
    int matriz[2][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Digite o valor da linha %d, coluna %d: ",
                   i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz digitada:\n");

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
