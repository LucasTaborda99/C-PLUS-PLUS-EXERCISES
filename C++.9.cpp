/* Desenvolva um programa que calcule o imposto em que o usu�rio ir� ter que pagar dependendo do seu sal�rio, levando em considera��o: sal�rios maiores que 1900 resultar�o em 2% de imposto, 2500 3%, 3700 4.5% e acima de 5000 resultar� em 6% de imposto, valores a baixo de 1900 n�o precisam pagar. */

#include <iostream>

using namespace std;

int main () {
    
    setlocale(LC_ALL,"Portuguese");
    
    float salario, imposto1, imposto2, imposto3, imposto4;
    
    cout << "\n-----TRIBUTA��O-----\n";
    
    cout << endl << "Digite o valor de seu sal�rio, conforme o seguinte exemplo (1000.00)" << endl << "R$ ";
    cin >> salario;
     
    imposto1 = salario * 2 /100;
    imposto2 = salario * 3 / 100;
    imposto3 = salario * 4.5 / 100;
    imposto4 = salario * 6 / 100;
    
    if(salario >1900.00 && salario <= 2500.00){
        cout << endl << "Voc� dever� pagar o total de: R$ " << imposto1 << " de imposto de renda, ou seja, 2% de seu sal�rio\n";
    }
    
    else if(salario > 2500.00 && salario <= 3700.00){
        cout << endl << "Voc� dever� pagar o total de: R$ " << imposto2 << " de imposto de renda, ou seja, 3% de seu sal�rio\n";
    }
    
    else if(salario > 3700.00 && salario <= 5000.00){
        cout << endl << "Voc� dever� pagar o total de: R$" << imposto3 << " de imposto de renda, ou seja, 4.5% de seu sal�rio\n";
    }
    
    else if(salario > 5000.00){
        cout << endl << "Voc� dever� pagar o total de: R$" << imposto4 << " de imposto de renda, ou seja, 6% de seu sal�rio\n";
    }
    
    else if(salario <= 1900.00){
        cout << endl << "Voc� n�o precisar� pagar o imposto de renda\n";
    }
    
    else {
        cout << endl << "Voc� n�o digitou no padr�o conforme o exemplo, por favor tente novamente";
    }
    
    return 0;
    
}
