use std::io;

fn main() {
    // Apresentação da calculadora
    println!("Calculadora de duração de viagem. Favor inserir apenas números.");
    println!("Informe o Nº de dias:");

    let mut dias:String = String::new(); // Declara a variável dias como uma string vazia
    io::stdin().read_line(&mut dias).expect("Erro ao ler entrada"); // Faz a leitura da entrada da variável dias
    let dias: i32 = dias.trim().parse().expect("Erro ao converter para interiro."); // Remove espaços vazios e converte a entrada para inteiro

    println!("Inform o Nº de horas:");

    let mut horas: String = String::new();
    io::stdin().read_line(&mut horas).expect("Erro ao ler entrada.");
    let horas: i32 = horas.trim().parse().expect("Erro ao converter para inteiro");

    let total: i32 = dias * 24 + horas;
    println!("A duração total da viagem é de {} horas.", total);

}
