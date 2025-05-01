#include <stdio.h>

void movtorre (int t) {

    if (t > 0) {
        printf("Direita\n");
        movtorre(t-1);
    }

}

void movbispo (int b) {
    if (b >0) {
        printf("Cima, Direita\n");
        movbispo (b-1);


    }

}

void movrainha (int r) {
    if (r >0){
        printf ("Esquerda\n");
        movrainha (r-1);

    }

}


int main (){

// Declaração de constantes e variaveis.
    const int torre = 5, bispo = 5, rainha = 8, cavalov =2, cavaloh=1;

    printf("*Movimentação da peça Torre*\n");

    movtorre(torre);


    printf("\n*movimetação da Peça Bispo*\n");

    movbispo (bispo);


    printf ("\n*Movimentação da peça Rainha*\n");

    movrainha (rainha);


    printf ("\n*Movimentação da peça Cavalo*\n");

    for (int c = 1 ; c <= 5; c++) {

        if (c > cavaloh) {
            break;
        }

        for(int c2 = 1; c2 <= 5; c2++) {

            if (c2 > cavalov) {
                break;
            }
            printf("Cima\n");

        }

        printf("Direita\n");

    }
       

    return 0;
}