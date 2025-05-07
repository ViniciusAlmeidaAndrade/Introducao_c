#include <stdio.h>
int main(){
    int verificando_primo, primo_ou_nao = 1;
    printf("Digite um numero para saber ele e primo ou nao: ");
    scanf(" %d", &verificando_primo);
    for(int i = 2; i < verificando_primo; i++){
        if(verificando_primo % i == 0){
            primo_ou_nao = 0;
        }
    }
    if(primo_ou_nao == 1){
        printf("%d e primo", verificando_primo);
    }else if(primo_ou_nao == 0){
        printf("%d nao e primo", verificando_primo);
    }
    return 0;
}