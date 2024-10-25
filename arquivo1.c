#include<stdio.h>
#include<stdlib.h>

int main(){
	
	FILE *arq;
	char texto[256];
	
	arq = fopen("digite.txt", "a");
	
	if(arq == NULL){
		printf("Erro na leitura do arquivo. ");
		return 1;
	}
	
	printf("Digite o texto: ");
	fgets(texto, sizeof(texto), stdin);
	fprintf(arq,texto);
	
	fclose(arq);
	return 0;
}
