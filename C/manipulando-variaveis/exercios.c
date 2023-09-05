#include <stdio.h>

int lista_num() {
    
    int array_num[5];
    array_num[0] = 1;
    array_num[1] = 200;
    array_num[2] = 50;
    array_num[3] = -25;
    array_num[4] = 33;

    // percorrendo o array
    for(int i = 0; i < 5; i++) {
        printf("indice: %d | valor do indice: %d\n", i, array_num[i]);
    }
    // variavel para auxiliar a percorrer o array
    int start_array = array_num[0];

    // loop para retornar o valor máximo do array
    for(int i = 1; i < 5; i++) {
        if(array_num[i] > start_array) {
            start_array = array_num[i];
        }
    }
    printf("%d\n", start_array);
    printf("%d\n", &array_num[0]);
    printf("%d\n", &array_num[1]);
    printf("%d\n", &array_num[2]);
    printf("%d\n", &array_num[3]);
    printf("%d\n", &array_num[4]);
}   

int main() {

    lista_num();

}