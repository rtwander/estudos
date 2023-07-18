#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

#define NUMERO_DE_TENTATIVAS 3

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");

    // imprimindo cabecalho bonito do jogo
	printf("\n\n");
	printf("          P  /_\\  P                              \n");
	printf("         /_\\_|_|_/_\\                            \n");
	printf("     n_n | ||. .|| | n_n         Bem vindo ao     \n");
	printf("     |_|_|nnnn nnnn|_|_|     Jogo de Adivinhação! \n");
	printf("    |\" \"  |  |_|  |\"  \" |                     \n");
	printf("    |_____| ' _ ' |_____|                         \n");
	printf("          \\__|_|__/                              \n");
	printf("\n\n");

	// declarando variaveis que serao usadas mais a frente
	int chute;
	int acertou;
	int nivel;
	int totaldetentativas;

	// Definindo a quantidade de pontos inicial
	double pontos = 1000;

	// Gerando um número secreto aleatório
	srand(time(0));
	int numerosecreto = rand() % 100;

	// Escolhendo um nível de dificuldade
	printf("Qual o nível de dificuldade?\n");
	printf("(1) Fácil (2) Médio (3) Difícil\n\n");
	printf("Escolha: ");

	scanf("%d", &nivel);

	switch(nivel) {
        case 1:
            totaldetentativas = 20;
            break;
        case 2:
            totaldetentativas = 15;
            break;
        default:
            totaldetentativas = 6;
            break;
    }

	// Loop principal do jogo
	for(int i = 1; i <= totaldetentativas; i++) {

		printf("Tentativa %d de %d\n", i, totaldetentativas);

		printf("Qual é o seu %do. chute? ", i);
		scanf("%d", &chute);

		// Tratando chute de número negativo
		if(chute < 0) {
			printf("Você não pode chutar números negativos\n");
			continue;
		}

		// Verifica se acertou, foi maior ou menor
		int acertou = chute == numerosecreto;

		if(acertou) {
			break;
		} else if(chute > numerosecreto) {
			printf("Seu chute foi maior do que o número secreto!\n");
		} else {
			printf("Seu chute foi menor do que o número secreto!\n");
		}
		
		// Calcula a quantidade de pontos
		double pontosperdidos = abs(chute - numerosecreto) / 2.0;
		pontos = pontos - pontosperdidos;
	}

	// Imprimindo mensagem de vitória ou derrota
	printf("\n");
	if(acertou) {
		printf("             OOOOOOOOOOO               \n");
		printf("         OOOOOOOOOOOOOOOOOOO           \n");
		printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n");
		printf("    OOOOOO      OOOOO      OOOOOO      \n");
		printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
		printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
		printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
		printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
		printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
		printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
		printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
		printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
		printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n");
		printf("         OOOOOO         OOOOOO         \n");
		printf("             OOOOOOOOOOOO              \n");
		printf("\nParabéns! Você acertou!\n");
		printf("Você fez %.2f pontos. Até a próxima!\n\n", pontos);
	} else {

        printf("       \\|/ ____ \\|/    \n");   
        printf("        @~/ ,. \\~@      \n");   
        printf("       /_( \\__/ )_\\    \n");   
        printf("          \\__U_/        \n");

		printf("\nVocê perdeu! Tente novamente!\n\n");
	}


}