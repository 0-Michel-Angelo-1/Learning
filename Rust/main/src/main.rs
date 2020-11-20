use std::io;

fn main() {
    let i: u8 = 255; //uma declaração pois não retorna um valor
                     //ponto e virgula obrigatório!

    let mut s1 = String::from("Texto");

    let r1 = &s1; //apenas lerr o valor

    println!("r1 leu {}", r1);
    println!("Hello, world! the number of the beast is {}", i);
    println!("i'm the new rust user");

    cleber(i);

    numero_muito_doidinho();

    println!(
        "Maluko doido a mulecada gosta de macaquim e na velocidade {}",
        vamoversapohaderetorno()
    );

    ta_na_hora_de_condicao();

    dejavu();

    farhtocelsius();

    fibonacci();

    let palavra = ownership();

    println!("{}", palavra);

    if ownership() == "Michel é muito lindo" {
        println!("Michel é muito lindo mesmo ó minha gente");
    } else {
        println!("Michel é fei pa cacete");
    }

    let tamanho: usize = referencias(&s1); //se refere ao valor de s1 sem tomar posse do mesmo

    println!("{} tem tamanho {}", s1, tamanho);

    modifica_emprestimo(&mut s1); //empresta valor mutável a 'add'
    println!("s1 agora tem: {}", s1)
}

fn cleber(i: u8) {
    println!("OI CARALHO MEU NOME É CLEBER!!! TENHO {} ANOS", i);
}

fn numero_muito_doidinho() -> u8 {
    2 //uma expressão, pois retorna um valor: 2
}

fn vamoversapohaderetorno() -> i32 {
    //retorna valor do tipo i32 (inteiro de 32 bits)
    let velocidade = 5;
    let velocidade = velocidade + 2;

    velocidade
}

fn ta_na_hora_de_condicao() {
    let mut input = String::new();

    println!("Diz algo sim:");
    io::stdin().read_line(&mut input).expect("deumerda"); //atribui o valor insirido pelo usuário a input
}

fn farhtocelsius() {
    let c = 40;
    let f = c * 9 / 5 + 32;

    println!("Tranformar {}ºC em fahreinheit é {}ºF ", c, f);
}

fn fibonacci() {
    let mut a = 0;
    let mut b = 1;
    let mut aux;

    for _num in 0..11 {
        aux = a + b;
        a = b;
        b = aux;

        println!("fibonacci :{}", aux);
    }
}

fn dejavu() {
    for num in 1..11 {
        println!("oi {}", num);
    }
}

fn ownership() -> String {
    let x = String::from("Michel");
    let str = x; //movendo x para str, rust vai invalidar x para que não haja double free
    let mut y = str.clone(); //clona o conteudo da memoria heap de 'stri' para 'y'

    y.push_str(" é muito lindo");

    y
}
//--------------------------------------------------//

//referencias ou borrowing(empréstimo ou agiotagem)
fn referencias(s: &String) -> usize {
    //s recebe o valor de s1 como referencia, mas não tomará posse dele
    s.len() //retorna o tamanho da string
}

fn modifica_emprestimo(add: &mut String) {
    //add recebe emprestado o valor referenciado pelo argumento do parametro para mutação
    add.push_str(" sobre a humanidade");
}
