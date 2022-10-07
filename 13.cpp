#include<stdio.h>
#include<math.h>
int main(){
	int idade;
	printf("digite a sua idade\n");
	scanf("%d",&idade);
		if(idade<=16){
	printf("menor de idade\n");
	}
	if(idade>=18 && idade<65){
	printf("maior de idade\n");
	}
	if(idade>=65){
	printf("idoso\n");
	}
		
	return 0;
}
