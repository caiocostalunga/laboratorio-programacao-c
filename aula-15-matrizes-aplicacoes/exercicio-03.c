Média de três alunos em duas provas - 


#include <stdio.h>

int main(void) {
    float notas[3][2];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Nota da prova %d do aluno %d: ",
                   j + 1, i + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        float media = (notas[i][0] + notas[i][1]) / 2;

        printf("Media do aluno %d: %.2f\n",
               i + 1, media);
    }

    return 0;
}

Aqui, cada linha representa um aluno e cada coluna representa uma prova. A média é calculada somando as duas notas do aluno e dividindo por 2.
