#[allow(unused_variables)]
#[derive(Debug)]
enum estado {
    Alaska,
}

enum Moeda {
    Penny,
    Nickel,
    Dime,
    Quarter(estado),
}

fn main() {
    valorcents(Moeda::Quarter(estado::Alaska)); //atrinui um estado dos eua no quarter

    let cinco = Some(5);
    let seis = mais_um(cinco); //vai adc mais um ao 5
    let nenhum = mais_um(None);

    if mais_um(cinco) == seis {
        println!("é cinco seis em");
    } else {
        println!("i é 5");
    }
    let algum_valoru8 = Some(5);

    if let Some(5) = algum_valoru8 {
        //opcao alternativa do match, porém perde em verificação
        println!("cinco");
    }
}

fn mais_um(x: Option<i32>) -> Option<i32> {
    match x {
        None => None,           //match que verifica valores  de x
        Some(i) => Some(i + 1), //caso seja algo é adicionado 1 ao valor
    }
}

fn valorcents(moeda: Moeda) -> u8 {
    match moeda {
        Moeda::Penny => 1,
        Moeda::Nickel => 5,
        Moeda::Dime => 10,
        Moeda::Quarter(estado) => {
            // relaciona as variantes da enum estado
            println!("Quarter do estado {:?}", estado);
            25
        }
    }
}
