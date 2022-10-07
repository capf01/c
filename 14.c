#include<stdio.h>
#include<math.h>
int main(){
	float salario,r;
	printf("digite seu salario\n");
	scanf("%f",&salario);
	r=0;
		if(salario<=600){
	printf("ISENTO\n");
	}
	if(salario>600&&salario<=1200){
	r=(salario*20)/100;
	printf("desconto de 20 por cento igual a %f",r);
	}
	if(salario>1200&&salario<=2000){
	r=(salario*25)/100;
	printf("desconto de 25 por cento igual a %f",r);
	}
	if(salario>2000){
	r=(salario*30)/100;
	printf("desconto de 30 por cento igual a %f",r);
	}	
	return 0;
}
