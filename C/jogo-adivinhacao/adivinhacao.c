#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#define NUMERO_DE_TENTATIVAS 3

int main() {
    // Para exibir pontuação gráfica corretamente
    setlocale(LC_ALL, "Portuguese_Brazil");

    // imprime cabecalho do nosso jogo
    printf("************************************\n");
    printf("*Bem-vindo ao Jogo de Adivinhação*\n");
    printf("************************************\n");

    double pontos = 1000;
    int numerosecreto = 42;

    int chute;
    int tentativas = 1;

    while(1) {

        printf("Tentativa %d\n", tentativas);
        printf("Qual é o seu %dº chute? ", tentativas);
        
        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if(chute < 0) {
            printf("Você não pode chutar números negativos\n");
            continue;

        }

        int acertou = chute == numerosecreto;
        int maior = chute > numerosecreto;

        if(acertou) {
            printf("Parabéns! Você acertou!\n");

            break;

        }
        
        else if(maior) {
            printf("Seu chute foi maior que o número secreto!\n");
       
        }
        
        else {
            printf("Seu chute foi menor do que o número secreto!\n");
        
        }

        tentativas++;

        double pontosperdidos = abs(chute - numerosecreto) / 2.0;
        pontos = pontos - pontosperdidos;

    }

    printf("Você acertou em %d tentativas!", tentativas);
    printf("Você fez %.2f pontos\n", pontos);
    printf("Obrigado por jogar!\n");

}