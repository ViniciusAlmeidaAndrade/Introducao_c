#include<stdio.h>
#include<string.h>

void verificar_usuario(char user_secret[], char pass_secret[]){
  char user_secret[] = "VINICIUS";
  char pass_secret[] = "1234";

  if((strcmp(user, user_secret) == 0) && strcmp (pass, pass_secret) == 0){
    printf("login realizado com sucesso!");
  }else{
  }
  printf("usuario ou senha incorretos!");
}

int main() {


  char user[20];
  char pass[8];

  printf("informe seu usuario");
  scanf("%s", user);

  printf("informe sua senha");
  scanf("%s", pass);
  verificar_usuario(user, pass);
  return 0;

}
