#include <stdio.h>
#include<conio.h>
#include<string.h>
main(void)
{
int cont,r,i;
char profissao[21];
char prof []={'dentista'};
cont=0;
printf("digite sua profissao");
gets(profissao);

while(i!=0){
	
	printf("para sair digite 0\n");
	scanf("%d",&i);
printf("digite sua profissao");
gets(profissao);
	if ( profissao== 'dentista'){
	cont++;	
}
}
printf("tem %d dentistas",cont);
system("pause");

}
