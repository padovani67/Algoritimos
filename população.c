#include <stdio.h>

int main(){
float	mediaSalarial=0, maiorSalario=0, percentual1200=0, salario=0, somaSalario=0, somaSalario1200=0;
int mediaNFilhos=0, contador=0, filho=0, somaFilho=0;
	
	while(salario>=0){
		printf("Digite o seu salário: ");
		scanf("%f", &salario);
	if(salario>=0){
		
		printf("Informe o numero de filhos: ");
		scanf("%d", filho);
		contador++; 
		somaSalario+=salario;
		somaFilho+=filho;
	
	if(salario>maiorSalario){
		maiorSalario=salario;
	}
	
	if(salario<=1200){
		somaSalario1200+=salario;
		
			printf("Digite o seu salário: ");
		scanf("%f", &salario);
		
	}
	}	
	}
	
	if(contador>0){
		mediaSalarial=somaSalario/contador;
		mediaNFilhos=somaFilho/contador;
		percentual1200=somaSalario1200/contador/100;
		
	}
	printf("\n A media salarial: \n %.2f", mediaSalarial);
	printf("\n A media de filhos: \n %d", mediaNFilhos);
	printf("\n Percentual de pessoas com salario inferior ou iguala a 1200: \n %.2f", percentual1200);
	
	
}
