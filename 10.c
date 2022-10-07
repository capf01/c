#include<stdio.h>
int main(){
	int a,b,c,maior,menor;
	maior=0;
	menor=0;
	printf("digite tres numeros\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b && a<c){
		menor=a;
	}
	if(b<a && b<c){
		menor=b;
	}
	if(c<a && b<a){
		menor=c;
	}
		if(c<a && b<a){
		menor=c;
	}
	if(a>b && a>c){
		maior=a;
	}
	if(b>a && b>c){
		maior=b;
	}
	if(c>a && c>b){
		maior=c;
	}	
printf("o maior e %d\n",maior);
	printf("o menor e %d\n",menor);
	return 0;
}
