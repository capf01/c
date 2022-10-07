#include<stdio.h>
#include<math.h>
int main(){
	int mes;
	printf("digite um mes de 1 a 12\n");
	scanf("%d",&mes);
		if(mes>=1&&mes<=12){
	if(mes==1){
	printf("janeiro\n");
	}
	if(mes==2){
	printf("fevereiro\n");
	}
	if(mes==3){
	printf("marco\n");
	}
	if(mes==4){
	printf("abril\n");
	}
	if(mes==5){
	printf("maio\n");
	}
	if(mes==6){
	printf("junho\n");
	}
	if(mes==7){
	printf("julho\n");
	}
	if(mes==8){
	printf("agosto\n");
	}
	if(mes==9){
	printf("setembro\n");
	}
	if(mes==10){
	printf("outubro\n");
	}
	if(mes==11){
	printf("novembro\n");
	}
	if(mes==12){
	printf("dezembro\n");
	}
	}
	else{
		printf("mes invalido");
	}
	return 0;
}
