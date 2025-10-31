#include<stdio.h>

int main(){

int voto=1, votoNulo=0, votoBranco=0, total=0;
int c1=0, c2=0, c3=0, c4=0, c5=0, c6=0;
float  p1, p2, p3, p4, p5, p6;

while(1){
	
	if(voto==0){
		break;
	}
	
	else{
	
	printf("informe seu voto: ");
	scanf("%d", &voto);
}
	if(voto==1){
		c1++;
	}if(voto==2){
		c2++;
	}if(voto==3){
		c3++;
	}if(voto==4){
		c4++;
	}if(voto==5){
		c5++;
	}if(voto==6){
		c6++;
	}
}
	total=c1+c2+c3+c4+c5+c6;
	p1=100.0*c1/total;
	p2=100.0*c2/total;
	p3=100.0*c3/total;
	p4=100.0*c4/total;
	p5=100.0*c5/total;
	p6=100.0*c6/total;

printf("Numero de votos e percentual do candidato 1 : %d  %.2f %% \n", c1, p1);	
printf("Numero de votos e percentual do candidato 2 : %d  %.2f %% \n", c2, p2);	
printf("Numero de votos e percentual do candidato 3 : %d  %.2f %% \n", c3, p3);	
printf("Numero de votos e percentual do candidato 4 : %d  %.2f %% \n", c4, p4);	
printf("Numero de votos e percentual nulos : %d  %.2f %% \n", c5, p5);	
printf("Numero de votos e percentual em branco : %d  %.2f %% \n", c6, p6);		
	
	
	
}
	
