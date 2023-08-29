use std::io;

fn main() {
    // Apresentação da calculadora
    println!("Calculadora de valor do jantar. Taxa do garçom é 10% do valor do jantar.");
    println!("Informe o valor do Jantar R$:");

    //Entrada do valor do jantar
    let mut in_valor_jantar = String::new();
    io::stdin().read_line(&mut in_valor_jantar).unwrap();

    println!("Você digitou R$: {}", in_valor_jantar);

    // Convertendo a entrada em número
    let valor_jantar: f64 = in_valor_jantar.trim().parse().expect("Digite valores positivos");

    // Calculo da taxa do garçom
    let taxa_garcom: f64 = valor_jantar * 0.10;
    let total_jantar: f64 = taxa_garcom + valor_jantar;

    println!("Taxa Garçom R$: {}\n Valor Total R$: {} ", taxa_garcom, total_jantar);

}
