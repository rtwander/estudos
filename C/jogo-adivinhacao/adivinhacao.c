#include <stdio.h>
#include <locale.h>

int main() {
    // Para exibir pontua��o corretamente
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Inicio jogo
    
    printf("Ol� Mundo! Meu nome � Rust.");

}