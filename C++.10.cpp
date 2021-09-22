/* A empresa Nebulosa, uma empresa de desenvolvimento de aparelhos humidificadores e de sanitização de ambientes esta preste a aumentar o seu quadro de funcionários pretendendo assim disponibilizar até quatro vagas, os candidatos receberam um formulário onde pede para que insiram o nome, pretensão salarial.

Desenvolva um algoritmo de validação de candidatos onde se a pretensão salarial do candidato for menor que 1.300 será apresentado um cargo de auxiliar de produção, caso o salário esteja entre 1.300 a 2.500 será apresentado um cargo de liderança, já se estiver acima de 2.500 o perfil do candidato não se encaixa no que a empresa procura.

O programa deve receber o nome do candidato e pretensão salarial e apresentar o cargo condizente.*/

#include<iostream>

using namespace std;

int main(){
    
    string nome;
    float salario=0;
    
    cout << endl << "\n---- VAGAS ----\n";
    
    cout << endl << " Informe o seu nome: ";
    getline (cin, nome);
    
    cout << endl << " Informe a sua pretensão salarial, conforme exemplo: (1000.00): R$ ";
    cin >> salario;
    
    if(salario>0 && salario <1300.00){
        cout << endl << " " << nome << ", temos vagas no cargo de auxiliar de produção." << endl;
    }
    else if(salario>=1300.00 && salario<=2500.00){
        cout << endl << " " << nome << ", temos vagas no cargo de liderança." << endl;
    }
    else if(salario>2500.00){
        cout << endl << " " << nome << ", seu perfil não se encaixa no que a empresa procura." << endl;
    }
    else{
        cout << endl << " Você não digitou no padrão conforme o exemplo, por favor tente novamente." << endl;
    }
    
 return 0;
  
}
