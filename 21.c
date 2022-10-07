#include <stdio.h>
int main()
{
    
    int a,cont;
    cont=0;
    printf("\n\n Insira um numero:\n");
    scanf("%d", &a);
    while(a>0){
		if(a>=50&&a<=200){
		cont++;
	}
	printf("Insira um numero:\n");
	scanf("%d", &a);

	}
	
	printf("foram digitado %d numeros compreendidos entre 50 e 200\n",cont);
    system("pause");
    return 0;
}
