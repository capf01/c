#include <stdlib.h>
#include <stdio.h>

int main(){

    char nome[60], sexo; /*nome, uma string com 60 posicoes*/
    int idade;

    printf("Insira o seu nome: ");
    scanf("%s", nome);

    printf("Insira sua idade: ");
    scanf("%d%*c", &idade); /*O %*c ira ignorar o ENTER que voce der*/
    printf("Insira o seu sexo: M - masculino F - feminino: ");
    scanf("%c", &sexo);
    if (sexo == 'F' && idade < 25)
        printf("%s: ***ACEITA***", nome);
    else
        printf("%s: ***NAO ACEITA*** ", nome);

    printf("\n\n");
    system("pause");
    return 0;
}
