#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int chute=-1, secreto;
	srand(time(NULL));
	secreto=rand()%10+1;
	
	while(secreto!=chute){
		printf("De um chute: ");
		scanf("%d", &chute);
		
		if(chute>secreto){
			printf("Chutou alto! \n");
		}
		if(chute<secreto){
			printf("Chutou baixo! \n");
		}
	}
	printf(" \n Acertou!! \n");
	
	
	
}
