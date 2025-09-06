#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    char nome_completo[30];
    fgets(nome_completo,30,stdin);
    printf("Ola, %s\n", nome_completo);

    return 0;
}