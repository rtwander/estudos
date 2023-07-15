#include <stdio.h>
#include <locale.h>

int main() {
    // Para exibir pontuação corretamente
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Inicio jogo
    
    printf("Olá Mundo! Meu nome é Rust.");

}