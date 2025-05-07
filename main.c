#include <stdio.h>
#include <string.h>

void exibir_texto_inicio_programa() {
  printf("Bem-vindo ao Jogo da Palavra Secreta!\n");
  printf("Tente adivinhar a palavra secreta.\n");
}

void verificar_palavra_secreta(char tentativa[], char palavra_secreta[]) {
  for (int i = 0; i < 3; i++) {
    printf("Digite sua tentativa: ");
    scanf("%s", tentativa);
    if (strcmp(tentativa, palavra_secreta) == 0) {
      printf("Parabéns! Você acertou a palavra secreta: %s\n", palavra_secreta);
      break;
    } else {
      printf("Você errou! A palavra secreta era: %s\n", palavra_secreta);
      continue;
    }
  }
}
int main() {
  exibir_texto_inicio_programa();
  char palavra_secreta[] = "CASA";
  char tentativa[50];
  verificar_palavra_secreta(tentativa, palavra_secreta);
  return 0;
}