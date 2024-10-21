/*
*  Leia quatro notas, calcule a média aritmética e imprima o resultado. 
*/

#include <stdio.h>

int main () {
	float nota1, nota2, nota3, nota4, media;
	
	//entrada
	printf("insira suas quadro notas(cada nota tem um valor de 0 ate 10): ");
	scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);
	
	//calculando a media das notas
	media = (nota1+nota2+nota3+nota4)/4;
	
	//saida
	printf("sua media e: %.2f",media);
}
