#include <stdio.h>

int main() {

    int num, cont, resul;

    if(num >= 1 && num <= 10) {
        for(cont = 1; cont <= 10; cont++){
            resul = (num * cont);
            printf("\t%d * %d =%d\n", num, cont, resul);
        }
    } else {
        printf("\n o numero nao esta entre 1 e 10");
    }

return 0;
}