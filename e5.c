#include <stdio.h>
#include <locale.h> //biblioteca de linguagem 
#define tm 8

int main(){
	setlocale(LC_ALL, "Portuguese"); //Definindo linguagem
	
    int numA[tm]; //inicializando vetor numérico
    int numB[tm]; //inicializando vetor numérico
    int i = tm ; //inicializando variáveis 
    
    for (int j = 0; j < tm; j++) { //loop para pegar todos os números e salvar nos vetores
        printf("Digite %d número(s): ", i);
        i--;
        scanf("%d", &numA[j]);  
    }
    
	printf("\n Tabela multiplicada por 3: \n");
	
    for (int j = 0; j < tm; j++){ 
        numB[j]= numA[j] * 3;
        printf("%d\n", numB[j]); 
    }
    return 0;
}