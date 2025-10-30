// Torre -> for | Bispo -> while | Rainha -> do-while | Cavalo -> loops aninhados

#include <stdio.h>

int main() {

    // TORRE: 5 casas para a direita (for)
    int casasTorre = 5;
    printf("=== Movimento da TORRE (for) ===\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // BISPO: 5 casas na diagonal para cima e direita (while)
    int casasBispo = 5;
    int contadorBispo = 1;
    printf("=== Movimento do BISPO (while) ===\n");
    while (contadorBispo <= casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    printf("\n");

    // RAINHA: 8 casas para a esquerda (do-while)
    int casasRainha = 8;
    int contadorRainha = 1;
    printf("=== Movimento da RAINHA (do-while) ===\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    // separação dos movimentos anteriores
    printf("\n");

    // CAVALO: 2 casas para baixo e 1 para a esquerda
    int movimentosVerticais = 2;   // duas casas para baixo

    printf("=== Movimento do CAVALO (for + while) ===\n");
    for (int mv = 1; mv <= movimentosVerticais; mv++) {  // loop externo (for)
        int passo = 1;
        while (passo <= 1) {                              // loop interno (while)
            printf("Baixo\n");
            passo++;
        }
    }

    printf("Esquerda\n");

    return 0;
}
