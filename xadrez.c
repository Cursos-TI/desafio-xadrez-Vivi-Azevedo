#include <stdio.h>

int main (){

// Declaração de constantes e variaveis.
    const int torre = 5, bispo = 5, rainha = 8;
    int i=1 , i2=1 , i3;

    //Movimentação da peça torre 5 casas a direita.
    printf("*Movimentação da peça Torre*\n");

    while (i <= torre){

        printf("Direita\n");

        i++;    
    } 

    //Movimentação da peça Bispo 5 casa para cima e direita,
    printf("\n*movimetação da Peça Bispo*\n");

    do {
        printf("Cima, Direita\n");
        i2++;

    } while (i2<= bispo);

    //Movimentação da Peça Rainha 8 casas para esquerda.

    printf ("\n*Movimentação da peça Rainha*\n");

    for (i3 = 1; i3<=rainha; i3++){
        printf("Esquerda\n");
    }

    return 0;
}