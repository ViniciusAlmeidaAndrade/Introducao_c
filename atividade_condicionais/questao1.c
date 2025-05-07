#include <stdio.h>
#include <ctype.h>

int main() {
    int idade;
    char assinatura;
    printf("Ola Vamos verrificar se você está liberado para acessar este site e preciso de algumas informacoes\n ");
    printf("Qual a sua idade? ");
    scanf(" %d", &idade);
    printf("Sua assinatura esta ativa?[S/N]");
    scanf(" %c", &assinatura);
    assinatura = toupper(assinatura);

    if(idade >= 18 && assinatura == 'S'){
        printf("Acesso liberado");
    }else{
        printf("Acesso negado");
    }
    return 0;
}