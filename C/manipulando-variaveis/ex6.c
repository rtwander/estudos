#include <stdio.h>

int main() {

    int num;
    printf("Os numeros pares entre 1 e 100 sao: ");
    
    for(num = 1; num < 100; num++) {
        if(num %2 == 0) {
            printf("%d, ", num);
        }

    }
    return 0;
}