#include <stdio.h>
#include <stdlib.h>

int main(){
    system ("clear");

    int vu, i=4,rs;
    printf("Digite o ano inicial:");
    scanf("%d",&vu);

    getchar();

    printf("Digite o ano final \n");

    scanf("%d",&rs);
    while ( i <= 2200){
        if ( i % 4 == 0){
            printf("O ano %d é bissexto\n", i);
        }
        i++;
    }
    return 0;
}