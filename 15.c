#include<stdio.h>
#include<math.h>
int main(){
	float compra,r,v;
	printf("digite o valor da compra\n");
	scanf("%f",&compra);
	r=0;
	v=0;
	if(compra<=200){
	r=(compra*45)/100;
	v=compra+r;
	printf("valor da venda %f",v);
	}
	if(compra>200){
	r=(compra*30)/100;
	v=compra+r;
	printf("valor da venda %f",v);
	}	return 0;
}
