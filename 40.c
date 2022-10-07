#include <stdio.h>
#include <math.h>
int main()
{
int i,soma;
soma=0;
for(i=20;i<=60;i++){
	if(i%2==0){
	soma=soma+i;
	}
}
printf("a soma dos numeros pares de 20 a 60\n %d\n",soma);
	system("pause");

}
