//________________QUESTÃO 2 _________________

#include <stdio.h>
#include <string.h>

int main(){
    int idade;
    char cliente[20];
    char estudante[] = "s";
    float valor;

    printf("Digite sua idade: ");
    scanf(" %d", &idade);
    printf("Voce e estudante?[s/n]");
    scanf(" %s", &cliente);
    printf("Digite o valor da sua compra: ");
    scanf(" %f", &valor);

    if (idade >= 65 || (strcmp(cliente, estudante) == 0) && (valor >= 100.0)){
        printf("Parabéns voce tem desconto na compra");
    }else{
        printf("Infelizmente sua compra nao obteve desconto ");
    }
    return 0;
}
