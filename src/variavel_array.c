#include <stdio.h>
#include <stdlib.h>

int main(){
    system ("clear");
    int nota1 = 10;
    int nota2 = 5;
    int nota3 = 3;

    int notas[3] = {10,5,3};
    //int notas[3] = {10,5,3};



    printf("A nota é %d - posição em memoria %p\n",nota1,&nota1);
    printf("A nota é %d - posição em memoria %p\n",nota2,&nota2);
    printf("A nota é %d - posição em memoria %p\n",nota3,&nota3);
    printf("\n----------------------------------------------\n");
    printf("A primeira nota é %d - posicão em memoria %p\n", notas[0],&notas[0]);
    printf("A segunda nota é %d - posicão em memoria %p\n", notas[1],&notas[1]);
    printf("A terceira nota é %d - posicão em memoria %p\n", notas[2],&notas[2]);
    return 0;


}