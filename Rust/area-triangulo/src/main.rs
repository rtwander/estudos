//Algoritmo para calcular a área de um triângulo.
use std::io; //importa a crate standard e especifica o módulo io

fn main(){
    //Apresentação do programa
    println!("Bem-Vindo a calculadora de área de um triângulo.");
    println!("Para utilizar basta informar na sequência o valor da base e depois o valor da altura do triângulo.");
    println!("Após inseridos o programa efetuará o cálculo e mostrará o resultado e depois se encerrá.");
    //Entrada do valor da base
    println!("Informe o valor da base:"); //Exibe mensagem

    let mut b_input = String::new(); //Cria a variável b como uma string vazia
    io::stdin().read_line(&mut b_input).unwrap(); //Faz a a leitura da entrada

    println!("Você digitou: {}", b_input); //Exibe o valor da entrada

    //Entrada do valor da altura
    println!("Informe o valor da altura:");

    let mut h_input = String::new();
    io::stdin().read_line(&mut h_input).unwrap();

    println!("Você digitou {}", h_input);

    //Operação de cálculo
    //Converte as entradas em número
    let b: u32 = b_input.trim().parse().expect("Digite apenas números positivos.");
    let h: u32 = h_input.trim().parse().expect("Digite apenas números positivos.");
    //Efetua o cálculo da área
    let area_triangulo = (b * h) / 2;
    println!("A área do triângulo é: {}", area_triangulo);
    println!("Fim do programa. Obrigado por usar nossa calculadora.")

}