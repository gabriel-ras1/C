/*
* Leia um n�mero e imprima o resultado do quadrado deste n�mero.
*/
#include <stdio.h>

int main() {
	//definindo vari�veis
	int n1,qua;
	
	printf("digite um numero inteiro: \n");
	
	//recebendo valor
	scanf("%d",&n1);
	
	//quadrado do valor dado
	qua = n1 * n1;
	
	//impriminto valor recebido
	printf("quadrado do valor informado : %d",qua);
	
	return 0;
}
