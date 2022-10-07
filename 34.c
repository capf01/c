#include <stdio.h>
#include <math.h>
int main()
{
int soma,i,num;
soma=0;
for(i=0;i<15;i++){
	printf("digite um numero\n");
	scanf("%d",&num);
	soma=soma+num;
	}
printf("a soma dos numeros e %d\n",soma);
system("pause");

}
