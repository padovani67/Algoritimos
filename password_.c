#include<stdio.h>
int main(){
	int senha, tent=0;
	
	while(tent<3){
		printf("Digite sua senha: ");
		scanf("%d", &senha );
		
		if(senha==123){
			printf("\n Senha correta!!");
			break;
		}else{
			tent++;
		if (tent>=3){
	printf("\n CONTA BLOQUEADA!");
		}else{
			printf("\n Senha incorreta, tente novamente \n");
		}

}

	}
	
	
	
}
