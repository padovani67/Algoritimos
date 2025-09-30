#include <stdio.h>
int main(){
   
   float valorDep, saque1, saque2, valorConta1, valorConta2;
   
    printf("Digite o valor a ser depositado: ");
    scanf("%f", &valorDep);
    
    printf("Digite o valor a ser sacado: ");
    scanf("%f", &saque1);
    
    valorConta1 = valorDep-saque1-(saque1*0.0038);
    printf("O saldo atual é de: %.2f \n", valorConta1);
    
    printf("Digite o valor a ser sacado: ");
    scanf("%f", &saque2);
    
    valorConta2 = valorConta1 -saque2 -(saque2*0.0038);
    printf("O saldo atual é de: %.2f \n", valorConta2);
}
