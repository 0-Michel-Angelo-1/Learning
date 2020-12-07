extern crate main;

use std::process::Command;
use std::{thread, time};

use fordcar::Carro;
use time::Duration;

use main::marcas::fordcar;

fn main() {
    let frase_filosofa: String = String::from(
        "o homem poderoso e aquele que tem poder sobre si mesmo - seneca".to_uppercase(),
    );
    //let autor: &str = pega_autor(&frase_filosofa);
    //imprime_letreiro(&frase_filosofa);
    //println!("{}", autor);
    let fordcar: Carro = Carro {
        modelo: String::from("FordCar2077_atiaderente"),
        tipo: String::from("Urbano"),
        nome: String::from("Forderente"),
        marca: String::from("Ford"),
    };

    println!("{:#?}", fordcar);
}
//essa função aplica o sleep, retardo na velocidade de algum loop quando chamado

fn espera_pouco() {
    let duzentos_milis: Duration = time::Duration::from_millis(200);
    thread::sleep(duzentos_milis);
}
//espera muito uai
fn espera_muito() {
    let duzentos_milis: Duration = time::Duration::from_millis(400); //define quantos segundos o programa deve parar
    thread::sleep(duzentos_milis); // faz o programa pausar por alguns segundos
}

//limpa a tela no terminal e mostra a tela limpa
fn limpa_tela() {
    let output = Command::new("clear")
        .output()
        .unwrap_or_else(|e| panic!("failed in execute process: {}", e));
    println!("{}", String::from_utf8_lossy(&output.stdout));
}

//mostra uma slice que representa o nome do autor
fn pega_autor(frase: &String) -> &str {
    let bytes: &[u8] = frase.as_bytes();

    for (i, &letra) in bytes.iter().enumerate() {
        if letra == b'-' {
            return &frase[i + 1..];
        }
    }
    &frase
}

//imprime um letreiro
fn imprime_letreiro(frase: &str) {
    const TAMANHO_JANELA: usize = 3;
    let mut i: usize = 0;

    loop {
        espera_pouco();
        limpa_tela();
        println!(
            "---------------[{}]--------------",
            &frase[i..i + TAMANHO_JANELA]
        );
        // caso o loop ultrapasse o tamanho da frase
        if i + TAMANHO_JANELA == frase.len() {
            espera_muito();
            i = 0;
        } else {
            i = i + 1;
        }
    }
}
