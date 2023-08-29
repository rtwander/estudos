// Neste exercício é criado uma função que recebe um entrada do usuário que será usada como seu nome.

use std::io;

pub fn saudacao() {
    let greeting = "Olá,";
    let mut nome = String::new(); // Varíavel mutável para receber a entrada
    println!("O exercício1 é um programa de saudação.");
    println!("Me informe seu nome e irei cumprimentá-lo.");

    io::stdin().read_line(&mut nome).unwrap(); // Faz a leitura da entrada

    println!("{} {}", greeting, nome); // Imprime a saudação com o nome inserido.
}
