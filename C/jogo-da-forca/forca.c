#include <stdio.h>

int main() {
    char palavrasecreta[20];

    palavrasecreta[0] = 'M';
    palavrasecreta[1] = 'E';
    palavrasecreta[2] = 'L';

    int numero = 3;

    palavrasecreta[numero] = 'A';

    palavrasecreta[4] = 'N';
    palavrasecreta[5] = 'C';
    palavrasecreta[6] = 'I';
    palavrasecreta[7] = 'A';

    // Para imprimir a palavra
    for(int i = 0; i < 8; i++) {
        printf("%c", palavrasecreta[i]);
    }
}