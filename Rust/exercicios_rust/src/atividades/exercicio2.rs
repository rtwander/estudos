//Modulo para data

use chrono::prelude::*;

pub fn data_atual() {
    let t = Local::now();
    let ano: i32 = t.year();
    let mes: u32 = t.month();
    let dia: u32 = t.day();
    let hora: u32 = t.hour();
    let minuto: u32 = t.minute();

    println!("O exercicio2 exibe a data atual.");
    println!("Hoje é {}-{}-{}, a hora é {}:{}", dia, mes, ano, hora, minuto);
}
