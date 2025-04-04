#include <stdio.h>
#include <string.h>

int main(){
        //char palavra[10] = {"c", "a", "s", "a","\0"};
        char palavra[10] = "casa";
        //char palavra[10] = {"casa"};
        char letra[10];

        printf("Bem vindo ao jogo da forca\n");
        printf("Regras: \n");

        char desenho[6] = ("____  ");

        for(int i = 0; i < 4; i++){
            printf("%s", desenho);
        }
            printf("\n");
            printf("Digite uma letra: ");
            scanf("%s", letra);
            printf("\n");
            if (strcmp(letra, palavra)==0){
                char desenho = letra;
                    printf("%s", desenho);
            }
            else{
                printf(desenho,"\n");
            }
        return 0;
    }

