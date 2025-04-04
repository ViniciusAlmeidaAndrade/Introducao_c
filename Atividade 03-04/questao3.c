//________________QUESTÃO 3 _________________

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char senha [20];
    int i;
    int tamanho;
    int numero = 0;
    int letra = 0;

    while((tamanho < 8) && (numero == 1 || letra == 1) ){
        printf("Digite sua senha com no min 8 letras contendo pelo menos 1 letra maiuscula e 1 numero: ");
        fgets(senha, sizeof(senha), stdin);
        tamanho = strlen(senha);
        if (tamanho >= 8){
            for(i = 0; i < tamanho; i++){
                if(isupper(senha[i]) || isdigit(senha[i])){
                    numero = 1;
                    letra = 1;
                    break;
                }
            }
            if (letra){
                printf("senha valida");
            }
            else{
                printf("Sua senha precisa conter pelo menos (1) letra maiuscula e/ou numero");
            }
        }else{
            printf("Senha muito curta.");
        }
    }
        return 0;
}
