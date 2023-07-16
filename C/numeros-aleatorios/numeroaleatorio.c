#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // Definindo a semente
    int segundos = time(0);
    srand(segundos);

    int n1 = rand();
    printf("%d\n", n1);
    int n2 = rand();
    printf("%d", n2);
}