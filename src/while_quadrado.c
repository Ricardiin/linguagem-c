#include <stdio.h>
#include <stdlib.h>

int main(){
    system ("clear");
    int lin=1;
    int col=1;

    while ( lin <= 10){
        col = 0;
        while (col <= 90){
            printf("*");
            col++;
        }
        printf("\n");
        lin++;
    }


    return 0;
}