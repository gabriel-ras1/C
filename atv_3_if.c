/*
* Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido proporcionalmente ao
valor que cada um deu para a realização da aposta. Faça um programa que leia quanto cada apostador
apostou, o valor do prêmio e imprima quanto cada um ganharia do prêmio com base no valor investido.
*/

int main(){
	
	float valor1, valor2, valor3, total_valor = 0;
	float premio = 0;
	float porc1, porc2, porc3,total_porc = 0;
	float premio1, premio2, premio3, total_premios = 0;
	
	//entrada
	printf("informe o valor do apostador 1:");
	scanf("%f", &valor1);
		
	printf("informe o valor do apostador 2:");
	scanf("%f", &valor2);
		
	printf("informe o valor do apostador 3:");
	scanf("%f", &valor3);
		
	printf("informe o valor do premio:");
	scanf("%f", &premio);
	
	total_valor = (float)(valor1 + valor2 + valor3);
	printf("total aposta: %.2f\n",total_valor);
	
	porc1 = (float)(valor1 / total_valor);
	porc2 = (float)(valor2 / total_valor);
	porc3 = (float)(valor3 / total_valor);
	total_porc = (float)(porc1 + porc2 + porc3);
	printf("total porc: %.2f\n",total_porc);
	
	premio1 = (float)(premio * porc1);
	premio2 = (float)(premio * porc2);
	premio3 = (float)(premio * porc3);
	total_premios = (float)(premio1+ premio2+premio3);
	printf("total premios: %.2f\n",total_premios);
	
	printf("Apostador 1 apostou %.2f que corresponde a %.2f e devera receber o premio de %.2f\n", valor1,porc1,premio1);
	printf("Apostador 2 apostou %.2f que corresponde a %.2f e devera receber o premio de %.2f\n", valor2,porc2,premio2);
	printf("Apostador 3 apostou %.2f que corresponde a %.2f e devera receber o premio de %.2f\n", valor3,porc3,premio3);
	
	return 0;
	
}
