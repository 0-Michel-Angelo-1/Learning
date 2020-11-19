extern crate rand;

use rand::Rng;
use std::cmp::Ordering;
use std::io; //usa uma biblioteca de i/o proveniente da biblioteca padrão 'std'

fn main() {
    println!("Advinhe o numero!");
    //rand::thread_rng() gera um numero aleatorio
    //gen_range(low, hight) gera um numero aleatorio entre os parametros
    let numero_secreto = rand::thread_rng().gen_range(1, 101);

    loop {
        println!("Digite o seu palpite:");

        let mut palpite = String::new(); /* .cria um local para armazenar o valor de entrada;
                                             .let utilizado para criar variaveis;
                                             .mut torna variaveis mutaveis;
                                             .String::new retorna uma instancia String, representa uma cadeia expansivel;


                                         */
        io::stdin() //manipulador de entrada
            .read_line(&mut palpite) //.read_line para obter a entrada do usuário, para coloca-la numa string;
            .expect("Falha ao ler entrada"); //metodo do op::Result que vai checar se a operacao falhou e mostrar informacoes sobre
                                             //converte um valor de um tipo em outro utilizando o mesmo nome
        let palpite: u32 = match palpite.trim().parse() {
            Ok(num) => num,
            Err(_) => continue,
        };
        println!("Voce disse: {}", palpite);

        match palpite.cmp(&numero_secreto) {
            Ordering::Less => println!("Muito baixo!"),
            Ordering::Greater => println!("Muito alto!"),
            Ordering::Equal => {
                println!("Você acertou! ah mizeravi");
                println!("O numero secreto é: {}", numero_secreto);
                break;
            }
        }
    }
}
