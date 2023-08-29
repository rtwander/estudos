// Definindo variáveis

fn main() {
    let a = 10; //o valor de a é 10. por inferencia o tipo é i32
    let b: i32 = 10; // o valor de b é 10 explicitando que é do tipo inteiro 32bits
    let c = 'a' // o valor de c é o char a minúscula.
    let d: char = 'b'; // O valor de d é o char b minúsculo, esplicitado o tipo.
    let e = "Bom"; // O valor de e é uma string.
    let f: str = "dia!" // mesma lógica de e com explicitando que é uma string estática.
    let g: String = "Olá!"; // mesma lógica de f porém outro formato de string.
    let h = a + b; // O valor de h é a soma das variáveis a e b.


    // Atribuição múltipla
    // É póssivel atribuir valores a diversas variáveis em uma mesma execução de let
    // basta encadeá-las dentro de ()
use chrono::prelude::*;

    let t =Local::now();
    let (year, month, day) = (t.year(), t.month(), t.day());
    println! ("Hoje é {}-{}-{}", year, month, day);
    //Nesse caso definimos 3 variáveis no mesmo let e atribuimos o valor de cada num mesmo parentese
}
