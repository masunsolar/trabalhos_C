#include <stdio.h>
#include <locale.h> //biblioteca de linguagem 
#define tm 5

int main() {
    int mt[tm][tm];
    setlocale(LC_ALL, "Portuguese"); //Definindo linguagem
    
    // Preenchendo a matriz com números inteiros
    printf("Preencha a matriz 5x5 com números inteiros:\n");
    for (int i = 0; i < tm; i++) {
        for (int j = 0; j < tm; j++) {
            printf("Elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &mt[i][j]);
        }
    }

    // Exibindo a matriz com as condições especificadas
    printf("\nMatriz resultante:\n");
    for (int i = 0; i < tm; i++) {
        for (int j = 0; j < tm; j++) {
            // Calculando a soma da linha e da coluna
            int smL = 0, smC = 0;

            // Soma da linha
            for (int k = 0; k < tm; k++) {
                smL += mt[i][k];
            }

            // Soma da coluna
            for (int k = 0; k < tm; k++) {
                smC += mt[k][j];
            }

            // Verificando se a soma da linha e da coluna é ímpar
            if ((smL % 2 != 0) && (smC % 2 != 0)) {
                printf("%d ", mt[i][j]);
            } else {
                printf("- ");
            }
        }
        printf("\n");
    }

    return 0;
}