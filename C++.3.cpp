/*Quest�o: Fa�a uma calculadora completa em C++ onde o usu�rio deve escolher uma op��o de equa��o (+, -, /, e *)
 inserir dois n�meros. O resultado da equa��o dever� sempre ser positivo.*/

#include <iostream>

using namespace std;

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float num1 = 0, num2 = 0, resultado = 0, resultado2 = 0;
	string oper_digitado;

	cout << endl << "----------------Calculadora--------------\n";
	
	cout << endl << "Digite o primeiro n�mero: ";
	cin >> num1;
	
	cout << endl << "Digite o segundo n�mero: ";
	cin >> num2;
	
	cout << endl << "Digite a opera��o que voc� deseja efetuar, conforme o exemplo, sem par�nteses: (+), (-), (/) ou (*): ";
	cin >> oper_digitado;
	
	if (oper_digitado != "+" || "-" || "/" || "*"){
		cout << endl << "Por favor digite a opera��o desejada conforme o exemplo\n";
	}
	
	if(oper_digitado == "+"){
		
		resultado=num1+num2;
		
	}
	else if(oper_digitado == "-"){
		
		resultado=num1-num2;
		
	}
	else if(oper_digitado == "/"){
		
		resultado=num1/num2;
	
	}
	else{

		resultado=num1*num2;
	
	}
	if(resultado < 0){
		
		resultado2 = resultado * -1;
		
		cout << endl << "O resultado �: " << resultado2;
	}
	else{
		cout << endl << "O resultado �: " << resultado;
	}
	

	return 0;
}

