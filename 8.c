

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#include <string.h>
 
//---------------------------------------------------------------------------
 
#pragma argsused
 
int main(){
 
	printf("\nInforme o valor de A: ");
	int A;
	scanf("%d", &A);
 
	printf("\nInforme o valor de B: ");
	int B;
	scanf("%d", &B);
 
	printf("\nInforme o valor de C: ");
	int C;
	scanf("%d", &C);
 
	int vMaior = (A + B + abs(A - B)) / 2;
	vMaior = (vMaior + C + abs(vMaior - C)) / 2;
 
	printf("\nO maior e: %d", (vMaior));
 
	printf("\n\n");
	system("pause");
} 
