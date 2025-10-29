#include<stdio.h>

int main(){
	int num, soma=0, cont=0;
	float media=0;
	
	while(num>=0){
		printf("Digite um numero: ");
		scanf("%d", &num);
		
		if(num<0){
			break;
		}
		soma+=num;
		cont++;	
	}
	if(cont>0){
		media=(float)soma/cont;
		printf("A quantidade de numeros digitados foi %d, a somatoria foi %d e a media %.2f", cont, soma, media);	}
	
}
