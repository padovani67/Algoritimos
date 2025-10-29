#include<stdio.h>

int main(){
	
	int joao=150, jose=110, anos=0;
	
	while(jose<=joao){
		
		joao+=2;
		jose+=3;
		anos++;
	}
	printf("Serao necessarioss %d anos para que jose seja maior que joao \n", anos);
	printf("altura de joao e de %d \n", joao);
	printf("A altura de jose e de %d \n", jose);
	
}
