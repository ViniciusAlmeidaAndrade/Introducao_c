/*
#include <stdio.h>
#include <string.h>
int idade;
char cliente[20];
float compra;
void Desconto(){
    char aluno[] = "s";
    if ((idade >= 65) || (strcmp(cliente, aluno) ==0) && (compra >= 100.0)){
        printf("Parabéns voce tem desconto na compra");
    }else{
        printf("Infelizmente sua compra nao obteve desconto ");
    }
}
int main(){
    printf("Digite sua idade: ");
    scanf(" %d", &idade);
    printf("Voce e estudante?[s/n]");
    scanf(" %s", &cliente);
    printf("Digite o valor da sua compra: ");
    scanf(" %f", &compra);
    Desconto(idade, cliente, compra);
    return 0;
}
*/

//_________________________________________________________//

/*
#include <stdio.h>
#include <string.h>
void Desconto(int idade, char cliente[], float compra){
    char aluno[] = "s";
    if ((idade >= 65) || (strcmp(cliente, aluno) ==0) && (compra >= 100.0)){
        printf("Parabéns voce tem desconto na compra");
    }else{
        printf("Infelizmente sua compra nao obteve desconto ");
    }
}
int main(){
    int idade;
    char cliente[20];
    float compra;
    printf("Digite sua idade: ");
    scanf(" %d", &idade);
    printf("Voce e estudante?[s/n]");
    scanf(" %s", &cliente);
    printf("Digite o valor da sua compra: ");
    scanf(" %f", &compra);
    Desconto(idade, cliente, compra);
    return 0;
}
*/
