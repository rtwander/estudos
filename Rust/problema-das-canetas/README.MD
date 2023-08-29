Partindo do seguinte problema desenvolveremos um algoritmo para casos gerais.

Compram-se 30 canetas iguais, que foram pagas com uma nota de R$ 100,00, obtendos-se R$ 67,00 como troco. Quanto custou cada caneta?

Demonstração matemática:

x é o custo de cada caneta,
quanto gastei = 30x
quanto gaste + troco = 100

30x + 67 = 100
30x = 100 - 67
30x = 33
x = 33/30
x = 1,1

Partindo do problema específico temos seguinte problema geral:

Compram-se N canetas iguais, que foram pagas com uma nota de Z reais, obtendo-se Y reais como troco. Quanto custou cada caneta?

Algoritmo geral para solucionar o problema:

INICIO
1. LER os valores de N, Y e Z.
2. SUBTRAIR Y de Z e dividir o resultado por N.
3. MOSTRAR o resultado final.
FIM

Para que faça sentido os resultados do algoritmo é necessário especificar condições que precisam ser validadas para que o resultado faça sentido, essas condições são observadas pelo modelador do problema uma vez que quais quer valores inseridos poderão retornar resultados ilógicos.

Condições:
1. O valor pago pelas canetas deve ser sempre maior que o troco recebido;
2. O valor pago deve ser maior que zero;
3. A quatidade de canetas deve ser maior que zero;
4. O troco deve ser deve ser igual ou maior que zero.

Em termos matemáticos:
Z > Y, N > 0, Z > 0 e Y >= 0.

Algoritmo geral correto para solucionar o problema das canetas:

INICIO
1. LER os valores de N, Y e Z.
2. SE Z > Y e N > 0 e Y >= 0 e Z > 0 ENTÃO
3.  SUBTRAIR Y de Z e DIVIDIR o resultado por N.
4. MOSTRAR o resultado final.
5. SENÃO
6. EXIBIR a mensagem: "Erro: os valores são inconsistentes!".
7. FIM SE
FIM
