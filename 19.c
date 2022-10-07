#include <stdio.h>
int main()
{
    char nome, sexo;
    int a,b,c,d;
    printf("\n\n Insira quatro numeros:\n");
    scanf("%d%d%d%d", &a,&b,&c,&d);
    if(a>=1&&a<=25||b>=1&&b<=25||c>=1&&c<=25||d>=1&&d<=25){
    	printf("ha pelo menos um numero digitado compreendido entre 1 e 25");
	}
	    if(a>=26&&a<=50||b>=26&&b<=50||c>=26&&c<=50||d>=26&&d<=50){
    	printf("ha pelo menos um numero digitado compreendido entre 26 e 50");
	}
	    if(a>=51&&a<=70||b>=51&&b<=70||c>=51&&c<=70||d>=51&&d<=70){
    	printf("ha pelo menos um numero digitado compreendido entre 51 e 70");
	}
	    if(a>=71&&a<=100||b>=71&&b<=100||c>=71&&c<=100||d>=71&&d<=100){
    	printf("ha pelo menos um numero digitado compreendido entre 71 e 100");
	}
    system("pause");
    return 0;
}
