#include <stdio.h>

void abertura(int multiplicador) {
    printf("Esta é a tabuada do %d\n\n", multiplicador);
}

int main() {

    int recomecar;

    do {
        printf("Bem vindo ao programa de tabuada.\n");
        printf("Digite o número inteiro que será gerada a tabuada.\n");

        int multiplicador;
        scanf("%d", &multiplicador);

        abertura(multiplicador);

        for( int i = 0; i <= 10; i++) {
            int resultado = multiplicador * 1;
            printf("%d x %d = %d\n", multiplicador, i, multiplicador * i);
        }
        //Menu para reiniciar aplicativo
        printf("Gostaria de gerar outra tabuada?\n");
        printf("Selecione 1(SIM), 2(NÃO): ");
        scanf("%d", &recomecar);
    } while(recomecar == 1);

    printf("Obrigado por usar o programa e espero que tenha sido útil.\n");
}