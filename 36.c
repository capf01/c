#include <stdio.h>
#include <math.h>
int main()
{
int soma,i,num,r;
soma=0;
for(i=0;i<12;i++){
	printf("digite um numero\n");
	scanf("%d",&num);
	soma=soma+num;
	r=soma/2;
	}
printf("a metade dos numero informado %d\n",r);
system("pause");

}
