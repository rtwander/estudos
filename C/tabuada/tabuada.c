#include <stdio.h>

void abertura(int multiplicador) {
    printf("Tabuada do %d\n", multiplicador);
}

int main() {
    int multiplicador = 2;

    abertura(multiplicador);

    for( int i = 0; i <= 10; i++) {
        int resultado = multiplicador * 1;
        printf("%d x %d = %d\n", multiplicador, i, multiplicador * i);
    }
}