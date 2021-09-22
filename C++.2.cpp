/*Jogo da adivinhação.
Desenvolva um algoritmo que leia um número de 1 a 10 e compare para saber se o número digitado está correto.*/

#include <iostream>
using namespace std;



int main(){
	
	float numero = 1.1;
	float numero_digitado;
	
		cout << "\n------------------------ Tente adivinhar qual e o numero entre 1 e 10 ---------------------------";
	
	while(numero!=numero_digitado){
		
		cout << "\n Digite um numero de 1 a 10: ";
		cin >> numero_digitado;
		
		if (numero_digitado<1 || numero_digitado>10){
			cout << " Seu numero esta fora do range !\n";
		}
		else if (numero_digitado!=numero){
			cout << " Infelizmente voce errou, mas nunca desista !\n";
		}
		else{
			cout << " Parabens, voce provavelmente demorou mas acertou !\n";
			break;
		}
	}
	
	return 0;
}
