// Movimentos das peças usando recursão e loops

#include <stdio.h>

// torre: repete "Direita" N vezes
void moverTorreRec(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorreRec(casas - 1);
}

// bispo: diagonal (cima + direita)
void moverBispoRec(int casas) {
    if (casas <= 0) return;

    for (int i = 0; i < 1; i++) {        // “cima”
        for (int j = 0; j < 1; j++) {    // “direita”
            printf("Cima Direita\n");
        }
    }

    moverBispoRec(casas - 1);
}

// rainha: anda pra esquerda
void moverRainhaRec(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainhaRec(casas - 1);
}

// cavalo: 2 pra cima e 1 pra direita
// usando for com 2 variáveis + while
void moverCavaloComplexo(void) {
    int maxCima = 2;
    int maxDir = 1;

    printf("=== Movimento do CAVALO (loops) ===\n");

    for (int cima = 0, dir = 0; (cima < maxCima) || (dir < maxDir); ) {

        while (cima < maxCima) {
            printf("Cima\n");
            cima++;
        }

        if (cima >= maxCima) {
            if (dir >= maxDir) break;
            printf("Direita\n");
            dir++;
            continue;
        }
    }
}

int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("=== Movimento da TORRE ===\n");
    moverTorreRec(casasTorre);

    printf("\n=== Movimento do BISPO ===\n");
    moverBispoRec(casasBispo);

    printf("\n=== Movimento da RAINHA ===\n");
    moverRainhaRec(casasRainha);

    printf("\n");
    moverCavaloComplexo();

    return 0;
}
