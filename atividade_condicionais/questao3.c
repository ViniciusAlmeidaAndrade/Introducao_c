#include <stdio.h>
int main(){
    float peso, altura, imc;
    printf("Vamos calcular seu IMC\n");
    printf("Digite seu peso(Kg): ");
    scanf("%f", &peso);
    printf("Digite sua altura(m) Ex: 1.80: ");
    scanf("%f", &altura);
    imc = peso/(altura * altura);
    if(imc < 18.5){
        printf("Abaixo do peso");
    }else if(imc >= 18.5 && imc < 25){
        printf("Normal");
    }else if(imc >= 25 && imc < 30){
        printf("sobrepeso");
    }else{
        printf("Obesidade");
    }
    return 0;
}