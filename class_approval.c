#include<stdio.h>

int main(){
	
	float media=0;
	int aprovados=0, reprovados=0;
	
	printf("Digite a media dos alunos(-1 para parar) \n");
	
	while(media!=-1){
		if(media>=7){
			aprovados=aprovados+1;
		}else{
			reprovados=reprovados+1;
		}
printf("Media: ");
scanf("%f", &media);


	}
printf("Numero de aprovados: %d ", aprovados);
printf("Numero de reprovados: %d", reprovados);	
}
