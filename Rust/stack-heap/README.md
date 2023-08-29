Diferença entre Stack e Heap

fonte: @rustcoder

Antes de explicar a diferença entre stack e heap, vamos enteder a diferença entre value-type e referece-type

Value-type, ou também "tipo de valor", são aqueles que armazenam os valores diretamente. Isso significa que, quando você atribui um valor a uma variável ou passa um valor como um parâmetro para uma função, uma cópia do valor é criada.

Exemplos de vaue-types em Rust incluem, inteiros, flutuantes, booleanos e estruturas.

Já o reference-type, ou tipo de referência, armazenam referências para valores. Isso significa que, quando você atribui uma referência a uma variável ou passa uma referência como parâmetro para uma função, você está passando uma referência para a memória onde o valor está armazenado.

Exemplos de reference-types em Rust incluem ponteiros, slices e smarts pointers como Box, Rc e Arc.

Stack: porção de memória pequena onde os values-types e os ponteiros ficam;

Heap: porção maior de memória onde os references-types ficam de fato alocados. Para se fazer o acesso a eles, precisamos de um ponteiro na stack que indique a posição de uma memória na heap onde o objeto está de fato alocado.