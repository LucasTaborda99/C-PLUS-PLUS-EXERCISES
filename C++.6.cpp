/* Crie um programa para ler as medidas dos lados de dois tri?ngulos X e Y. em seguida, mostrar o valor das ?reas dos dois tri?ngulos e dizer qual dos dois tri?ngulos possui a maior ?rea.

Formula para o calculo da area:

Area Raiz p(p-a)(p-b)(p-c)

onde p = (a+b+c)/2

*/

#include <iostream>
#include <clocale>

using namespace std;

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
float a1;
float a2;
float a3;
float b1;
float b2;
float b3;
float p1;
float p2;
float area;

// TRI?NGULO 1
cout << "Digite a primeira medida do  1? tri?ngulo: ";
cin >> a1;

cout << "Digite a segunda medida do 1? tri?ngulo: ";
cin >> a2;

cout << "Digite a terceira medida do 1? tri?ngulo: ";
cin >> a3;

p1 = (a1+a2+a3)/2;

cout << "A ?rea do tri?ngulo ?: " << p1;


// TRI?NGULO 2 
cout << "\nDigite a primeira medida do 2? tri?ngulo: ";
cin >> b1;

cout << "\nDigite a segunda medida do 2? tri?ngulo: ";
cin >> b2;

cout << "\nDigite a terceira medida do 2? tri?ngulo: ";
cin >> b3;

p2 = (b1+b2+b3)/2;

cout << "\nA ?rea do tri?ngulo ?: " << p2;

if(p1 == p2){
	cout << "\nA ?rea dos tri?ngulos s?o iguais";
	
} else if(p1 > p2){
	cout << "\nA ?rea do primeiro tri?ngulo ? maior do que a ?rea do segundo";
	
	} else if(p1 < p2){
	cout << "\nA ?rea do segundo tri?ngulo ? maior do que a ?rea do primeiro";
}
	
	
return 0;

}

