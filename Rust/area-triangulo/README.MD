Algoritmo para calcular e exibir na tela a área de um triângulo de base b e altura h, em que os valores de b e de h são fornecidos pelo usuário via teclado.

Sabe-se que há uma fórmula para tal calculo que resolve de maneira geral quaisquer entradas válidas.

s ← (b*h)/2

Algoritmo informal para o cáculo:

INICIO
1. Pedir para o usuário digitar os valores de b e de h.
2. Calcular a área s usando a fórmula s=(b*h)/2.
3. Exibir o valor de s na tela.
FIM

Algoritmo formal para o cálculo

INICIO
1. Ler (b,h)
2. s←(b*h)/2
3. Exibir (s)
FIM

A implementação do código foi feita em rust por linha de comando.

Caso o usuário insira valores não numéricos inteiros o sistema irá gerar erro.
Futuramente irei condicionar para que seja somente permitida entrada de números.

Futuramente quero implementar um menu simples para que o usuário decida se quer fazer outro cálculo ou sair do programa.