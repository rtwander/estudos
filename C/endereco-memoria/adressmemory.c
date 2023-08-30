#include <stdio.h>

int main() {

    int c = 10;
    int* ponteiro; // inicializa um ponteiro
    
    // ponteiro apontando para o mesmo endereço de c
    ponteiro = &c;

    // imprime o endereço da varável c
    printf("%d %d\n", ponteiro, &c);

    // imprime o conteúdo da variável c
    printf("%d %d\n", *ponteiro, c);

    // imprime o conteúdo da variável c e exibe seu endereço
    printf("%d %d\n", ponteiro, c);
}