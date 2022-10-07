#include<stdio.h>
#include<math.h>
int main(){
	int a,b,r,q,maior,menor;
	maior=0;
	menor=0;
	printf("digite dois numeros");
	scanf("%d%d",&a,&b);
	if(a<b){
		menor=a;
		maior=b;
	}
	if(a>b){
		menor=b;
		maior=a;
	}
	if(a==b){
		printf("sao iguais\n");
	}
	else{
	
	r=sqrt(maior);
	q=menor*menor;
	printf("a raiz quadrada do maior e %d\n",r);
	printf("o quadrado do menor e %d\n",q);
}
	return 0;
}
