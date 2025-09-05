#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear"); // no Windows use "cls"

    int mes;

    printf("Digite o número do mês e eu lhe direi o mês por extenso:\n");
    scanf("%d", &mes);

    switch(mes) {
        case 1:
            printf("Este é o mês de Janeiro\n");
            break;
        case 2:
            printf("Este é o mês de Fevereiro\n");
            break;
        case 3:
            printf("Este é o mês de Março\n");
            break;
        case 4:
            printf("Este é o mês de Abril\n");
            break;
        case 5:
            printf("Este é o mês de Maio\n");
            break;
        case 6:
            printf("Este é o mês de Junho\n");
            break;
        case 7:
            printf("Este é o mês de Julho\n");
            break;
        case 8:
            printf("Este é o mês de Agosto\n");
            break;
        case 9:
            printf("Este é o mês de Setembro\n");
            break;
        case 10:
            printf("Este é o mês de Outubro\n");
            break;
        case 11:
            printf("Este é o mês de Novembro\n");
            break;
        case 12:
            printf("Este é o mês de Dezembro\n");
            break;
        default:
            printf("Mês inválido!\n");
    }

    return 0;
}