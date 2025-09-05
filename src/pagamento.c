#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    float preco, resultado;
    char forma_pg;
    printf("Digite o Valor a ser pago e tecle ENTER\n");
    scanf("Digite o valor a ser pago e tecle enter\n");
    scanf("%f", &preco);

    printf("Digite a forma de pagamento sendo:\nc->crédito\nd->débito\nD->dinheiro\np->pix\n");
    scanf("%c", &forma_pg);

    if ( forma_pg == 'c' ) {
        resultado = preco * (0.5 + 1);
        // Resultado - preco * 0.05 + preco;
        printf("O valor a ser pago no crédito é %f\n",resultado);
    }
    else if ( forma_pg == 'd'){
        printf("O valor a ser pago no débito é %f\n",preco);
    }
    else if ( forma_pg == 'D'){
        resultado = preco * 0.98;
        printf("O valor a ser pago no dinheiro é %f\n",resultado);
    }
    else if ( forma_pg == 'p'){
        resultado = preco * 0.96;
        printf("O valor a ser pago no pix é %f\n",resultado);
    }
    else {
        printf("Esta forma de pagamento NÃO EXISTE!\n");
    }
    return 0;
}