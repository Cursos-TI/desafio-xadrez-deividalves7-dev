#include <stdio.h>

int main() {

    printf("Desafio Xadrez\n");

   
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    int casasBispo = 5;
    int contador = 1;

    printf("Movimento do Bispo:\n");
    while (contador <= casasBispo) {
        printf("Cima, Direita\n");
        contador++;
    }

    printf("\n");

    int casasRainha = 8;
    int j = 1;

    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= casasRainha);

    return 0;
}

