#include <stdio.h>
#include <stdlib.h>

int main(){
    int b,e,r;
    system ("clear");
    printf("Dige um valor para a base:\n");
    scanf("%d",&b);

    printf ("Digite um valor para o expoente:\n");
    scanf("%d",&e);

    r = b;

    for(int i = 1 ; i <= e-1; i++){
        r = b * r;
        //r = r * b;//
        //r+=b;//
    }
    printf("O resultado de %d\n",r);

    return 0;

}