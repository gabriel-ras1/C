/*
* Fa�a um programa que leia tr�s valores e apresente como resultado a soma dos quadrados dos valores lidos. 
*/
#include <stdio.h>

int main(){
	int n1,n2,n3,soma;
	
	//entrada
	printf("digite tres valores: \n");
	scanf("%d %d %d",&n1,&n2,&n3);
	
	//soma dos valores dados ao quadrado
	soma = n1 * n1 + n2 * n2 + n3 * n3;
	
	//sa�da
	printf("A somas dos valores ao quadrado e: %d",soma);
	
	return 0;
}
