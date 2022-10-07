#include <stdio.h>
#include <math.h>
int main()
{
int i,num,cont,cont1;
cont=0;
cont1=0;
for(i=0;i<20;i++){
	printf("digite um numero\n");
	scanf("%d",&num);
	if(num%2==0){
		cont++;
	}
	else{
		cont1++;
	}
	}
printf("os numeros pares %d numeros impares %d\n",cont,cont1);
system("pause");

}
