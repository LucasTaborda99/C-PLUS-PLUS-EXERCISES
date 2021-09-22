/*Crie um algoritmo que converta Metros para Polegadas, P?s, Jardas, Milhas, Cent?metros e Quil?metros.

F?rmulas:

po = m * 39.37;
pe = m * 3.281;
ja = m * 1.094;
mi = m / 1609;
cm = m * 100;
km = m / 1000;
Sendo, ent?o: m = metros, po = polegadas, pe = p?s, ja = jardas, mi = milhas, cm = centimetros, km = quil?metros.
*/

#include <iostream>
#include <clocale>

using namespace std;

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
float metros, polegadas, pes, jardas, milhas, centimetros, quilometros;
	
	cout << "Digite o n?mero em metros (m): ";
	cin >> metros;
	
	polegadas = metros * 39.37;
	pes = metros * 3.281;
	jardas = metros * 1.094;
	milhas = metros / 1609;
	centimetros = metros * 100;
	quilometros = metros / 1000;
	
cout << "\n----------Convers?es---------";
cout << "\n Convers?o de Metros para polegadas: " << polegadas;
cout << "\n Convers?o de Metros para pes: " << pes;
cout << "\n Convers?o de Metros para jardas: " << jardas;
cout << "\n Convers?o de Metros para milhas: " << milhas;
cout << "\n Convers?o de Metros para centimetros: " << centimetros;
cout << "\n Convers?o de Metros para quilometros: " << quilometros;

return 0;

}
	
	
