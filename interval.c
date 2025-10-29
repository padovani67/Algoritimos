#include<stdio.h>

int main(){
	int num=0, cont=0, quantidadeIntervalo=0, quantidadeFora=0;
	
	while(cont<10){
		printf("Digite um numero: ");
		scanf("%d", &num);
		
		if(num<=20 && num>=10){
			quantidadeIntervalo++;
			
		}
		else {
			quantidadeFora++;
	}
		cont++;
			}

	printf("Numeros dentro do intervalo: %d", quantidadeIntervalo);
	printf("\n Numeros fora do intervalo: %d", quantidadeFora);
	
}
