//crie um arquivo com data e hora atual
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    system("clear");
    FILE *f;
    char nome_arquivo[50];
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    sprintf(nome_arquivo, "data_hora_%04d%02d%02d_%02d%02d%02d.txt", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
    f = fopen(nome_arquivo, "w");
    if (f == NULL) {
        printf("Erro ao criar o arquivo!\n");
        return 1;
    }
    fprintf(f, "Arquivo criado em: %04d-%02d-%02d %02d:%02d:%02d\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
    fclose(f);
    printf("Arquivo %s criado com sucesso!\n", nome_arquivo);
    return 0;
}
//o arquivo deve ser criado com o nome data_hora.txt
//o arquivo deve conter a data e hora atual
//o arquivo deve ser criado na pasta do projeto
//o arquivo deve ser criado com o comando system("clear");
//o arquivo deve ser criado com o comando fopen(nome_arquivo, "w");     