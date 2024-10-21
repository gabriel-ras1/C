#include<stdio.h>

int main(){
    int i,mult;

    for(i = 0; i < 5; i++){
        mult = 3 * (i + 1);
        printf("%d * 3 = %d\n",i + 1,mult);
    }
    return 0;
}