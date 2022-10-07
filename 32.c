#include <stdio.h>
#include <math.h>
int main()
{
int menor,i,num;
menor=1;
for(i=0;i<25;i++){
	printf("digite um numero\n");
	scanf("%d",&num);
	if(num<menor){
		menor=num;
	}
	}
printf("o menor e %d\n",menor);
system("pause");

}
