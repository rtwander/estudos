fn main () {
let nome = String::from("rustcoder");

{
    let outro_nome = String::from("ruster");

}

println!("{}", nome); // rustcoder
println!("{}", outro_nome); // ERROR: not foun in this scope

}