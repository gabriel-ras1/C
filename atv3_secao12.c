/*
3. Considerando a estrutura que representa um vetor R3:
struct Vetor{
float x;
float y;
float z;
};
Implemente um programa que receba, calcule.
*/
#include <stdio.h>
#include <string.h>

struct vetor{
float x;
float y;
float z;
}; 

float soma(struct vetor somaReais) {
    float resultado = somaReais.x + somaReais.y + somaReais.z;
    return resultado;
}

int main(){

    struct vetor somaReais;

        printf("Informe o numero 1:\n");
        scanf("%f", &somaReais.x);

        printf("Informe o numero 2:\n");
        scanf("%f", &somaReais.y);
        
        printf("Informe o numero 3:\n");
        scanf("%f", &somaReais.z);

        float resultado = soma(somaReais);

        printf("A soma dos %.2f + %.2f + %.2f = %.2f", somaReais.x , somaReais.y , somaReais.z, resultado);
    
    return 0;
}
