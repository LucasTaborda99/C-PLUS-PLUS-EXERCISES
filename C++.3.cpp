/*Questão: Faça uma calculadora completa em C++ onde o usuário deve escolher uma opção de equação (+, -, /, e *)
 inserir dois números. O resultado da equação deverá sempre ser positivo.*/

#include <iostream>

using namespace std;

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float num1 = 0, num2 = 0, resultado = 0, resultado2 = 0;
	string oper_digitado;

	cout << "----------------Calculadora--------------\n";
	
	cout << endl << "Digite o primeiro número: ";
	cin >> num1;
	
	cout << endl << "Digite o segundo número: ";
	cin >> num2;
	
	cout << endl << "Digite a operação que você deseja efetuar, conforme o exemplo, sem parênteses: (+), (-), (/) ou (*): ";
	cin >> oper_digitado;
	
	if(oper_digitado == "+"){
		
		resultado=num1+num2;
		
	}
	else if(oper_digitado == "-"){
		
		resultado=num1-num2;
		
	}
	else if(oper_digitado == "/"){
		
		resultado=num1/num2;
	
	}
	else if (oper_digitado == "*"){

		resultado=num1*num2;
	
	} else {
		cout << endl << "Por favor digite a operação desejada conforme o exemplo\n";
	}
	
	if(resultado < 0){
		
		resultado2 = resultado * -1;
		
		cout << endl << "O resultado é: " << resultado2;
	}
	else{
		cout << endl << "O resultado é: " << resultado;
	}
	

	return 0;
}
