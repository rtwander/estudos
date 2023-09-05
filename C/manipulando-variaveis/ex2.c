// declarando variáveis
// os códigos abaixo não são necessáriamente compiláveis.

// forma simples
int idade;
float preco;
char letra;

//atribuindo valores na declaracão
int idade = 30;
float preco = 19.99;
char letra = 'R';

// declarando multiplas variáveis em uma linha
int numero1, numero2, numero3;

// utilizando typedef para definir novos tipos
typedef int Idade;
Idade idade = 25;

//variáveis globais são variáveis declaradas fora de qualquer escopo de função
int variavelGlobal = 100;
int main() {
// código aqui...
}

// variaveis estáticas
void contador() {
    static int valor = 0;
    valor ++;
}

// variáveis de ponteiro
int numero = 42;
int* ponteiroNumero = &numero;

