//________________QUESTÃO 1 _________________


#include <stdio.h>
#include <string.h>
void verificao(){
    int idade;
    char socio_convite[20];
    char confirmacao[] = "s";
    if (idade >= 18) {
        printf("Voce é sócio ou tem convite?");
        scanf(" %s", &socio_convite);
        if(strcmp(socio_convite, confirmacao) == 0){
            printf("Entrada Permitida");
        } else{
            printf("Acesso ao clube foi negado!");
        }
    }else{
        printf("Acesso ao clube foi negado!");
    }
}
int main () {
    int anos;
    printf("Quantos anos voce tem?");
    scanf(" %d", &anos);
    verificao(anos);

    return 0;
}

