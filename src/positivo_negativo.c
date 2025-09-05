#include <stdlib.h>
#include <stdio.h>

int main(){
    system("clear");
    int v;
    printf("Digite um número e tecle enter:\n");
    scanf("%d", &v);
    if(v > 0 ){
        printf("O valor digitado é Positivo\n");
    }
    else if( v < 0 ){
        printf("O valor digitado é Negativo\n");
    }
    else{
        printf("O valor digitado é Zero\n");
    }


}