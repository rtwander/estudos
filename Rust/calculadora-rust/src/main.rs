use std::io;
mod calculadora;
use calculadora::adicao::adicao;

fn main() {
    println!("Informe o primeiro número");
    let mut x = String::new();
    io::stdin().read_line(&mut x).unwrap();
    let x: i32 =x.trim().parse().unwrap(); // Converte x para i32

    println!("Informe o segundo número");
    let mut y = String::new();
    io::stdin().read_line(&mut y).unwrap();
    let y: i32 = y.trim().parse().unwrap(); // Converte x para i32

    let resultado = adicao(x, y);
    println!("O resultado da adição é: {}", resultado);

}