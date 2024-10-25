#include <stdio.h>
#include <stdlib.h>

int main(){
	
	FILE *arq;
	char linha[256];
	
	arq = fopen("helloword.txt", "r");
	
	if(arq == NULL){
		printf("Erro na leitura do arquivo.");
		return 1;
	} 	
	
	while(fgets(linha, sizeof(linha), arq)){
		printf("%s", linha);
	}
	
	fclose(arq);
	return 0;
}
