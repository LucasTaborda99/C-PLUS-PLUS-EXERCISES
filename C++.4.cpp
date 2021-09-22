//Monte um algoritmo que encontre o valor de acelera??o adquirida pelo corpo, sendo o valor correspondente a massa ? de 20 kg e a sua for?a resultante ? igual a 220N encontre o valor de acelera??o.

/*-Fica dica-
F?rmulas:
fr = m * a (para calcular for?a de acelera??o)
a = fr / m (para calcular acelera??o)
*/

#include <iostream>
#include <clocale>

using namespace std;

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float massa = 20;
	float forca_result = 220;
	float aceler;
	float forca_aceler;
	
	aceler = forca_result / massa;
	
	cout << "\n O valor de acelera??o ?: " << aceler;
	
	return 0;
	
}

