// Dado um número inteiro de segundos, mostrar a quantas horas, minutos e segundos ele corresponde.

#include <stdio.h>

int main() {

    int iQtdSegundos, iHoras, iMinutos, iSegundos;
    
    printf("\nEntre com o valor em segundos: ");
    scanf("%d", &iQtdSegundos);

    /* Divisão de inteiros */
    iHoras = iQtdSegundos / 3600;
    iMinutos = (iQtdSegundos - (iHoras * 3600)) / 60;
    iSegundos = (iQtdSegundos - (iHoras / 3600)) % 60;

    printf("\nHora convertida %02d:%02d:%02d", iHoras, iMinutos, iSegundos);

return 0;
}