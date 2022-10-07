#include<stdio.h>
#include<math.h>
int main(){
	int idade;
	printf("digite a sua idade\n");
	scanf("%d",&idade);
		if(idade>=5&&idade<=7){
	printf("infantil A\n");
	}
	if(idade>=8&&idade<=10){
	printf("infantil B\n");
	}
	if(idade>=11&&idade<=13){
	printf("juvenil A\n");
	}	
		if(idade>=14&&idade<=17){
	printf("juvenil B\n");
	}
	if(idade>=18){
	printf("SENIOR\n");
	}
	return 0;
}
