#include <stdio.h>
#include <stdlib.h>

int main(){
    system ("clear");
    int in, fn;
    printf("Digite o ano inicial:\n");
    scanf("%d",&in);

    printf("Digite o ano final:\n");
    scanf("%d",&fn);

    while( in <= fn){
        if (in % 4 == 0){
            printf("o Ano ~> %d <~ é bissexto\n", in);
        }
        in++;
    }
    return 0;
}