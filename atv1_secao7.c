#include<stdio.h>

int main(){
    int A[6] ={1,0,5,-2,-5,7};
    int soma= A[0] + A[1] + A[5];

    printf("a soma de %d+%d%d: %d",A[0],A[1],A[5],soma);

    A[4] = 100;

    for(int i = 0; i < 6; i ++){
        printf("A[%d] = %d\n", i, A[i]);
    }

    return 0; 


}