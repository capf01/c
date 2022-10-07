#include <stdio.h>
#include <math.h>
int main()
{
int maior,menor,i,num,r;
menor=1;
maior=0;
for(i=0;i<10;i++){
	printf("digite um numero\n");
	scanf("%d",&num);
	if(num<menor){
		menor=num;
	}
	if(num>maior){
		maior=num;
	}
	}
	r=maior-menor;
printf("a diferença do maior e do menor e %d\n",r);
system("pause");
}
