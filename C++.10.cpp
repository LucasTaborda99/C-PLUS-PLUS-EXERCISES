/* A empresa Nebulosa, uma empresa de desenvolvimento de aparelhos humidificadores e de sanitiza��o de ambientes esta preste a aumentar o seu quadro de funcion�rios pretendendo assim disponibilizar at� quatro vagas, os candidatos receberam um formul�rio onde pede para que insiram o nome, pretens�o salarial.

Desenvolva um algoritmo de valida��o de candidatos onde se a pretens�o salarial do candidato for menor que 1.300 ser� apresentado um cargo de auxiliar de produ��o, caso o sal�rio esteja entre 1.300 a 2.500 ser� apresentado um cargo de lideran�a, j� se estiver acima de 2.500 o perfil do candidato n�o se encaixa no que a empresa procura.

O programa deve receber o nome do candidato e pretens�o salarial e apresentar o cargo condizente.*/

#include<iostream>

using namespace std;

int main(){
    
    string nome;
    float salario=0;
    
    cout << endl << "\n---- VAGAS ----\n";
    
    cout << endl << " Informe o seu nome: ";
    getline (cin, nome);
    
    cout << endl << " Informe a sua pretens�o salarial, conforme exemplo: (1000.00): R$ ";
    cin >> salario;
    
    if(salario>0 && salario <1300.00){
        cout << endl << " " << nome << ", temos vagas no cargo de auxiliar de produ��o." << endl;
    }
    else if(salario>=1300.00 && salario<=2500.00){
        cout << endl << " " << nome << ", temos vagas no cargo de lideran�a." << endl;
    }
    else if(salario>2500.00){
        cout << endl << " " << nome << ", seu perfil n�o se encaixa no que a empresa procura." << endl;
    }
    else{
        cout << endl << " Voc� n�o digitou no padr�o conforme o exemplo, por favor tente novamente." << endl;
    }
    
 return 0;
  
}
