Contador de caracteres - 

  #include <stdio.h>

int main() {
    char palavra[100];
    int i, contador = 0;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    // Percorre até encontrar o caractere nulo '\0'
    for (i = 0; palavra[i] != '\0'; i++) {
        contador++;
    }

    printf("A quantidade de letras digitadas e: %d\n", contador);

    return 0;
}

