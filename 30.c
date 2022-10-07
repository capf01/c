#include <stdio.h>
#include <math.h>
int main(void)
{
int idade,i,cont,cont1;
cont=0;
cont1=0;
printf("digite um 0 para sair\n");
	scanf("%d",&i);
while(i!=0){
	printf("digite sua idade\n");
	scanf("%d",&idade);
	if(idade<21){
	cont++;
	}
	if(idade>50){
	cont1++;
	}
	printf("digite um 0 para sair\n");
	scanf("%d",&i);
}
printf("maiores que 50 %d e menores que 21 %d",cont1,cont);
system("pause");

}
