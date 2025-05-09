#include <stdio.h>
#include <locale.h> //biblioteca de linguagem 
#define tm 15

int main(){
	setlocale(LC_ALL, "Portuguese"); //Definindo linguagem
	
    char nom[tm][60]; //inicializando um vetor bidimensional para que o número máximo de character dos nomes sejam 50
    int i = tm, j; //inicializando variáveis 
    
    for (int j = 0; j < tm; j++) { //loop para pegar todos os nomes e salvar nos vetores
        printf("Digite %d nome(s): ", i);
        i--;
        scanf("%s", &nom[j]);  
    }

    printf("\nLista de nomes ao contrário:\n");
    for (int j = (tm-1); j >= 0; j--){ //loop decrescente para imprimir a lista ao contrário
        printf("Posição %d - %s\n", (j+1), nom[j]); 
    }
    return 0;
}