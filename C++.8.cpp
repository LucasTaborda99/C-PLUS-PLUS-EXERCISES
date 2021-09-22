/* Estabeleça se a pessoa quer perder, manter ou engordar o seu peso e efetue um algoritmo de escolha das 3 opções, após a escolha, estabelecer quantos KG a pessoa tem para efetuar a conversão de Quilograma em Calorias, independente da opção escolhida, o resultado deve conter o mínimo e o máximo de calorias de acordo com os seguintes dados:

Para emagrecer - multiplique 20 ou 25 pelo peso escolhido
Para manter o peso - multiplique 25 ou 30 pelo peso escolhido
Para engordar - multiplique 30 ou 35 pelo peso escolhido */

#include <iostream>
#include <string>
#include <clocale>
using namespace std;

int main (){
    
    setlocale(LC_ALL,"Portuguese");
    
    float emagrecer_min, emagrecer_max, 
    manter_min, manter_max, engordar_min, 
    engordar_max;
    string desejo;
    float peso;
    
    cout << "\n---Emagrecer, Manter ou Engordar---\n";
    
    cout << "\nDigite o seu peso em Kg (Exemplo: 62.34): ";
    cin >> peso;
    
    cout << "\nDigite o que você deseja (emagrecer, manter ou engordar): ";
    cin >> desejo;
    
    emagrecer_min = peso * 20;
    emagrecer_max = peso * 25;
    manter_min = peso * 25;
    manter_max = peso * 30;
    engordar_min = peso * 30;
    engordar_max = peso * 35;
    
   if(desejo == "emagrecer"){
        cout << "\nValor mínimo em calorias: " << emagrecer_min;
        cout << endl <<  "\nValor máximo em calorias: " << emagrecer_max;
    }
    else if(desejo == "manter"){
        cout << "\nValor mínimo em calorias: " << manter_min;
        cout << "\n\nValor máximo em calorias: " << manter_max;
    }
    else if(desejo == "engordar"){
    cout << endl << "Valor mínimo em calorias: " << engordar_min; 
        cout << endl << "\nValor máximo em calorias: " << engordar_max; 
    }
    else if(desejo != "emagrecer" || desejo != "manter" || desejo != "engordar"){
        cout << endl << "Você digitou algo inválido, por favor tente novamente";
    }
    
    return 0;
}

