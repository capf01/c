#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c,maior,menor;
	maior=0;
	printf("digite tres numeros\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c){
		maior=a;
	}
	if(b>a && b>c){
		maior=b;
	}
	if(c>a && c>b){
		maior=c;
	}
	printf("o maior e %d",maior);	
	return 0;
}
