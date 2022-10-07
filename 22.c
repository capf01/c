#include <stdio.h>
#include<string.h>
void main()
{   
    char nome[100];
    
    printf("\ndigite um nome:\n");
    scanf("%s", &nome);
    printf("%c",nome[0]);
	while(nome!='FIM'){
		printf("\n Insira um nome:\n");
    scanf("%s", &nome);
		printf("%c",nome[0]);
	}
	


	system("pause");
    return 0;
}
