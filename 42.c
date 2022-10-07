#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
char nome[100];
int i,r=0;
for(i=0;i<=8;i++){
	gets(nome);
	r=strlen(nome);
	puts(nome);
printf("o tamanho e %d\n",r);
}
	system("pause");

}
