// Este programa pede ao usuario dois numeros e,
// realiza a soma entre eles e ao final exibe o 
// resultado
#include <stdio.h>
int main (){
    // Declarar as variaveis que irão receber
    // os numeros digitados pelos usuarios
    int numero1;
    int numero2;
    int resultado;
    // Vamos pedir ao usuario entrar com primeiro valor
    printf ("Digite o numero: \n ");
    // capturando o numero digitado  pelo usuario 
    // com o comando scanf
    scanf ("%d",&numero1);

    printf ("Digite o segundo numero inteiro e tecle Enter: \n ");
    scanf ("%d",&numero2);

    // Vamos realizar a soma entre os numeros 1 e 2 
    resultado = numero1 + numero2;
    // Apresentar o resultado em tela
    printf ("O resultado da soma entre %d com o numero %d é: %d \n", numero1, numero2, resultado);

    return 0; // sempre a ultima coisa do código
    
    }
