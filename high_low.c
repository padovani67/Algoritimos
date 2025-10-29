#include<stdio.h>

int main(){
	int num=0, altura=0, cont=0, baixo=1, alto=0, numAlto=0, numBaixo=0;
	
	while(cont<3){
		printf("\n Digite o numero do aluno: ");
		scanf("%d", &num);
		
		printf("\n Digite a altura em cm do aluno: ");
		scanf("%d", &altura);
		
		
	if(cont==0){
		alto=altura;
		baixo=altura;
		numAlto=num;
		numBaixo=num;
	}else{
	
		if(altura>alto){
			alto=altura;
			numAlto=num;
		} 
		if(altura<baixo){
			baixo=altura;
			numBaixo=num;
		}
}
cont++;
	}
	printf("\n Aluno mais alto numero %d, e de altura: \n %d", numAlto, alto);
	printf("\n Aluno mais baixo numero %d, e de altura: \n %d",numBaixo, baixo);
	
}
