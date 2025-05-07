#include <stdio.h>

int main(){
    float valor_compra, desconto;

    printf("Oi me informe o valor da sua compra: ");
    scanf(" %f", &valor_compra);
    if(valor_compra >= 200){
        desconto = valor_compra - (valor_compra * 20/100);
        printf("Sua compra obteve um desconto de 20%% valor final da compra é: %.2f", desconto);
    }else if(valor_compra >= 100){
        desconto = valor_compra - (valor_compra * 10/100);
        printf("Sua compra obteve um desconto de 10%% valor final da compra é: %.2f", desconto);
    }else{
        printf("valor final da compra é: %f", valor_compra);
    }
    return 0;
}