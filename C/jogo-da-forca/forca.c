#include <stdio.h>
#include <string.h>
#include "forca.h"
#include <stdlib.h>
#include <time.h>

// variáveis globais
char palavrasecreta[TAMANHO_PALAVRA];
char chutes[26];
int chutesdados = 0;

int chuteserrados() {

    int erros = 0;

    for(int i = 0; i< chutesdados; i++) {
        int existe = 0;
        for(int k = 0; j < strlen(palavrasecreta); j++) {
            if(chutes[i] == palavrasecreta[j]) {
                existe = 1;
                break;
            }
        }
        if(!existe) erros ++;
    }
    return erros;
}

int enforcou() {

    return chutes

    int erros = 0;

    for(int i = 0; i < chutesdados; i++) {

        int existe = 0;
        
        for(int j = 0; j < strlen(palavrasecreta); j++) {

            if(chutes[i] == palavrasecreta[j]) {

                existe = 1;
                break;
            }

            if(!existe) erros++;

        }
        return erros >=5;
    }
}


void abertura() {
    printf("/****************/\n");
    printf("/ Jogo de Forca */\n");
    printf("/****************/\n\n");
}

void chuta() {
    char chute;
    printf("Qual a letra? ");
    scanf(" %c", &chute);

    chutes[chutesdados] = chute;
    chutesdados++;
}

int jachutou(char letra) {
    int achou = 0;
    for(int j = 0; j < chutesdados; j++) {
        if(chutes[j] == letra) {
            achou = 1;
            break;
        }
    }
    return achou;
}

int ganhou() {

    for(int i =0; i < strlen(palavrasecreta); i++) {
        if(!jachutou(palavrasecreta[i])) {
            return 0;
        }    
    }
    return 1;
}

void desenhaforca() {

    printf("  _______      \n");
    printf(" |/      |     \n");
    printf(" |      (_)    \n");
    printf(" |      \\|/   \n");
    printf(" |       |     \n");
    printf(" |      / \\   \n");
    printf(" |             \n");
    printf("_|___          \n");
    printf("\n\n");

    printf("Você já deu %d chutes.\n", chutesdados);

    for(int i = 0; i < strlen(palavrasecreta); i++) {
        if(jachutou(palavrasecreta[i])) {
            printf("%c ", palavrasecreta[i]);    
        } else {
            printf("_ ");
        }    
    }
    printf("\n");

}

void escolhepalavra() {
    FILE* f;

    f = fopen("palavras.txt", "r");
    if(f == 0) {
        printf("Banco de dados de palavras não está disponível\n\n");

        exit(1);
    }

    int qtddepalavras;
    fscanf(f, "%d", &qtddepalavras);

    srand(time(0));
    int randomico = rand() % qtddepalavras;

    for(int i = 0; i<= randomico; i++) {
        fscanf(f, "%s", palavrasecreta);
    }
    fclose(f);
}

void adicionarpalavra() {
    char quer;

    printf("Você deseja adicionar uma nova palavra no jogo (S/N)?");
    scanf(" %c", &quer);

    if(quer == 'S') {
        char novapalavra[TAMANHO_PALAVRA];
        printf("Digite a nova palavra, em letras maiúsculas: ");
        scanf("%s", novapalavra);

        FILE* f;

        f = fopen("palavras.txt", "r+");
        if(f == 0) {
            printf("Banco de dados indisponível\n\n");
            exit(1);
        }

        int qtd;
        fscanf(f, "%d", &qtd);
        qtd++;
        fseek(f, 0, SEEK_SET);
        fprintf(f, "%d", qtd);
        
        fseek(f, 0, SEEK_END);
        fprintf(f, "\n%s", novapalavra);

        fclose(f);
    }

}

int main() {

    abertura();
    escolhepalavra();

    do {

        desenhaforca();
        chuta();

        chutesdados++;

    // aqui invocamos a função enforcou    
    } while(!ganhou() && !enforcou());
}