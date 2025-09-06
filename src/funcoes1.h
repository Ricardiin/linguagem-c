#include <stdio.h>
#include <stdlib.h>

void exibir(int valor)
{
    printf("%d\n",valor);
    printf("%p\n",&valor);
}
void exibir2(int *valor)
{
    printf("\n-------------> Exibir2 <-------------\n");
    printf("%d\n",*valor);
    printf("%p\n",valor);

}