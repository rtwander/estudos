#include <stdio.h>

int quadrado(int n) {
    return n * n;
}

int main() {

    // guardando em uma variável
    int resultado = quadrado(2);
    printf("O quadrado de 2 é: %d.\n", resultado);

    // usando diretamente em um if
    if(quadrado(3) < 10) {
        printf("Já sabia, o quadrado de 3 é 9.\n");
    }

    // usando diretamente em um printf
    printf("E o quadrado de 5 é: %d.\n", quadrado(5));
}