#include <stdio.h>
#include<string.h>
void main()
{   
    char nome[100],sobrenome[100],c[10];
	char sair[]={'SAIR'};
    int tam, tam1;
    printf("\ndigite um nome:\n");
    gets(nome);
       printf("\ndigite um sobrenome:\n");
    gets(sobrenome);
	while(strcmp(nome,sair)!=0 || strcmp(sobrenome,sair)!=0){
		printf("\ndigite um nome:\n");
    gets(nome);
       printf("\ndigite um sobrenome:\n");
    gets(sobrenome);   
    tam= strlen (nome);
	tam1= strlen (sobrenome);
	printf("tamanho do nome %d e do sobrenome %d",tam,tam1);		
	}
    system("pause");
}
