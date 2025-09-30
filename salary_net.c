#include <stdio.h>
int main(){
    
    float salario, salarioNovo, salarioFinal, imposto;
    
    printf("Digite o valor do seu salário: ");
    scanf("%f", &salario);
    
    salarioNovo = salario*1.05;
    imposto = 0.07*salarioNovo;
    salarioFinal = salarioNovo-imposto;
    
    printf("O valor a receber é de: %.2f\n", salarioFinal);
    
}
