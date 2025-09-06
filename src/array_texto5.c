//o programa deve pedir o nome do aluno e ao colocar numa variavel. depois , ele ira pedir as 4 notas do aluno, sendo uma por vez. Fara o calculo da media aritmetica e irá exisbir o conceito do alunos, se estiver aprovado, reprovado ou em recuperação.
//oBS: Alunos com  maior ou igual a 7, estarão aprovador, caso o aluno tenha uma nota media menor ou igual a 4, estara reprovado, caso contrario, em recuperação. O programa deve exibir a nota média e o conceito.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    char nome[30];
    float n1, n2, n3, n4, media;

    printf("Digite o nome do aluno:\n");
    fgets(nome,30,stdin);
    printf("Digite a primeira nota:\n");
    scanf("%f", &n1);
    printf("Digite a segunda nota:\n");
    scanf("%f", &n2);
    printf("Digite a terceira nota:\n");
    scanf("%f", &n3);
    printf("Digite a quarta nota:\n");
    scanf("%f", &n4);

    media = (n1 + n2 + n3 + n4) / 4;

    if(media >= 7){
        printf("O aluno %s com nota média %.2f está Aprovado\n", nome, media);
    } else if(media <= 4){
        printf("O aluno %s com nota média %.2f está Reprovado\n", nome, media);
    } else {
        printf("O aluno %s com nota média %.2f está em Recuperação\n", nome, media);
    }

    return 0;


}