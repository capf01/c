#include <stdio.h>
#include <math.h>
int main()
{
int maior,i,num;
maior=0;
for(i=0;i<15;i++){
	printf("digite um numero\n");
	scanf("%d",&num);
	if(num>maior){
		maior=num;
	}
	}
printf("o maior e %d",maior);
system("pause");

}
