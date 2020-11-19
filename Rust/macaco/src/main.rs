extern crate rand;

use rand::Rng;
use std::io;

fn main() {
    let matriz = [
        "Macaco ardiloso",
        "monki flip",
        "Monki artico",
        "MOnki Trist :(",
    ];

    println!("Digite alguma letra para descobrir qual macaco você é:");

    let mut letra = String::new();

    io::stdin()
        .read_line(&mut letra)
        .expect("Insira um caractere válido, fdp");

    let numero_aleatorio = rand::thread_rng().gen_range(0, 4);

    println!("Você é um {}", matriz[numero_aleatorio]);
}
