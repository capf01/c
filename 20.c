#include <stdio.h>
int main()
{
    
    int a,cont;
    cont=0;
    printf("\n\n Insira um numero:\n");
    scanf("%d", &a);
    while(a>0){
	printf("Insira um numero:\n");
	scanf("%d", &a);
	cont++;
	}
	printf("foram digitado %d numeros positivos\n",cont);
    system("pause");
    return 0;
}
