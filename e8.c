#include <stdio.h>
#include <locale.h> //biblioteca de linguagem 
#define tm 5
#define tm2 3

int main(){
	setlocale(LC_ALL, "Portuguese"); //Definindo linguagem
	
    int numA[tm2][tm]; //inicializando vetor numérico
    int numB[tm2][tm]; //inicializando vetor numérico
    int vetC[tm2][tm]; //inicializando vetor numérico
    
    for (int j = 0; j < tm2; j++) { //loop para pegar todos os números e salvar nos vetores
    	for(int k = 0; k < tm; k++){
        	printf("Digite o número da posição %d - %d para o vetor A: ", (j+1), (k+1));
        	scanf("%d", &numA[j][k]);  
        }
    }
    
    for (int j = 0; j < tm2; j++) { //loop para pegar todos os números e salvar nos vetores
    	for(int k = 0; k < tm; k++){
        	printf("Digite o número da posição %d - %d para o vetor B: ", (j+1), (k+1));
        	scanf("%d", &numB[j][k]);  
        }
    }
    
	printf("\n Tabela da soma dos vetores: \n");
	
    for (int j = 0; j < tm2; j++){ 
    	for(int k = 0; k < tm; k++){
    		vetC[j][k]= numA[j][k]+numB[j][k];
        	printf("%d ", vetC[j][k]); 
		}
		printf("\n");
    }
    return 0;
}