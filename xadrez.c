#include <stdio.h>

int main (){

// Declaração de constantes e variaveis.
    const int torre = 5, bispo = 5, rainha = 8, cavalov =2, cavaloh=1;
    int i=1 , i2=1 , i3, i4, i5 = 1;

    printf("*Movimentação da peça Torre*\n");
    while (i <= torre){

        printf("Direita\n");

        i++;    
    } 

    printf("\n*movimetação da Peça Bispo*\n");

    do {
        printf("Cima, Direita\n");
        i2++;

    } while (i2<= bispo);

    printf ("\n*Movimentação da peça Rainha*\n");

    for (i3 = 1; i3<=rainha; i3++){
        printf("Esquerda\n");
    }


    do {
        printf ("\n*Movimentação da peça Cavalo*\n");

        for(i4 = 1; i4 <=2; i4++) {
            printf("Baixo\n");
        }

        printf("Esquerda\n");
        i5++;
    
    } while (i5<=1);


    return 0;
}