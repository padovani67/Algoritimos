#include<stdio.h>
int main(){
	int num=1, fatorial=1, i=1;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	while(i<=num){
		fatorial = fatorial*i;
		i++;
	}
	printf("O fatorial de %d é: %d", num, fatorial);
	
	
	
}
