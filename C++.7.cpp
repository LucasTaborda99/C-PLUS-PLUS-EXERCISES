/*Crie um algoritmo em C++ que receba um número e que questione ao usuário dois outros números que dividam o mesmo. E depois o algoritmo deve informar ao usuario caso tenha tido ou sucesso ou uma falha.*/

#include <iostream>
#include <clocale>
using namespace std;


int main (){
    
    setlocale(LC_ALL,"Portuguese");
    
  int  num1, num2, num3;
    
    cout << "\n---Divisíveis---\n";
    
  cout << "\nDigite um número: " ;
  cin >> num1;
  
  cout << "\nDigite o primeiro divisível: " ;
  cin >> num2;
  
   cout << "\nDigite o segundo divisível: " ;
   cin >> num3;
   
   if( num1 % num2 == 0 && num1 % num3 == 0 ){
      cout << "\nVocê acertou os dois divisíveis\n" ;
      
   } else if (num1 % num2 == 0 && num1 % num3 != 0){
       cout << "\nVocê acertou apenas o primeiro divisível\n";
       
   } else if (num1 % num2 != 0 && num1 % num3 == 0){
       cout << "\nVocê acertou apenas o segundo divisível\n";
       
   }
   	else{
       cout << "\nVocê não acertou nenhum divisível\n";
   }
   
 return 0;
    
}
