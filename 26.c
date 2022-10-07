#include <stdio.h>
#include <math.h>
int main(void)
{
int q,num,r;
printf("digite um numero inteiro\n");
	scanf("%d",&num);
q=num*num;
	printf("valor do quadrado %d\n",q);
while(num%5!=0){
	printf("digite um numero inteiro\n");
	scanf("%d",&num);
	q=num*num;
	printf("valor do quadrado %d\n",q);
}
system("pause");

}
