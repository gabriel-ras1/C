#include <stdio.h>

int main(){
    
    int var1, var2;

    printf("indique o valor da var1: ");
    scanf("%d",&var1);
    printf("indique o valor da var2: ");
    scanf("%d",&var2);

    if(&var1 > &var2){
        printf("%d\n",&var1);
        printf("%d\n",var1);
    }
    else{
        printf("%d\n",var2);
        printf("%d\n",&var2);
    }

    return 0;
}