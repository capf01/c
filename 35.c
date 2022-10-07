#include <stdio.h>
#include <math.h>
int main()
{
int i;
float nota,med,soma;
soma=0;
med=0;
for(i=0;i<40;i++){
	printf("digite uma nota\n");
	scanf("%f",&nota);
	soma=soma+nota;
	med=soma/40;
	}
printf("a media das notas e %f\n",med);
system("pause");
}
