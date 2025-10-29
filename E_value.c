#include<stdio.h>

int main(){
	int num=1, numFatorial=1, i=1;
	float conta;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	while(i<=num){	
		numFatorial=numFatorial*i;
		i++;
	}
	
	conta = conta + 1.0/numFatorial;
	
	printf("O valor de E: %.2f \n", conta);
	
}
