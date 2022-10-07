#include <stdio.h>
#include<conio.h>
#include<string.h>
main(void)
{
int cont,i,cont1;
char sexo[21];
cont=0;
cont1=0;
printf("digite seu sexo m ou f");
gets(sexo);
printf("para sair digite 0\n");
	scanf("%d",&i);
while(i!=0){
	printf("para sair digite 0\n");
	scanf("%d",&i);
printf("digite seu sexo m ou f");
gets(sexo);
	if ( sexo == 'f'){
	cont++;
}
if ( sexo == 'm'){
cont1++;
}
}
printf("tem %d mulheres e %d homens",cont,cont1);
system("pause");

}
