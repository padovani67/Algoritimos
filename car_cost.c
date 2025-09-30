#include <stdio.h>
int main(){
    
    float valorCarro, lucro, imposto, venda;
    int pImposto, pLucro;
    
    printf("Digite o preço de fábrica do carro: ");
    scanf("%f", &valorCarro);
    
    printf("Digite o percentual de lucro desejado: ");
    scanf("%d", &pLucro);
    
    printf("Digite o percentual de imposto: ");
    scanf("%d", &pImposto);
    
    lucro = valorCarro*pLucro/100;
    imposto = valorCarro*pImposto/100;
    venda = valorCarro+lucro+imposto;
    
    printf("O lucro foi de: %.2f \n", lucro);
    printf("O imposto foi de: %.2f \n", imposto);
    printf("O preço final de venda: %.2f\n", venda);
}
