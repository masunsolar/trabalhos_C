#include <stdio.h>
#include <locale.h> //biblioteca de linguagem 
#define tm 10

int main(){
	setlocale(LC_ALL, "Portuguese"); //Definindo linguagem
	
    int num[tm]; //inicializando vetor numérico
    int i = tm; //inicializando variáveis 
    
    for (int j = 0; j < tm; j++) { //loop para pegar todos os números e salvar nos vetores
        printf("Digite %d número(s): ", i);
        i--;
        scanf("%d", &num[j]);  
    }

    printf("\n Tabela dos elementos pares do vetor: \n");
    for (int j = 0; j < tm; j++){ //loop para verificar se o número é par
        if (num[j] % 2 == 0) { //verifica se o número é par olhando o resto da divisão por 2
            printf("Posição %d - %d\n", j, num[j]); //escreve o número caso o resto seja 0
        }
    }
    return 0;
}