/*Crie um algoritmo em C++ que receba um n�mero e que questione ao usu�rio dois outros n�meros que dividam o mesmo. E depois o algoritmo deve informar ao usuario caso tenha tido ou sucesso ou uma falha.*/

#include <iostream>
#include <clocale>
using namespace std;


int main (){
    
    setlocale(LC_ALL,"Portuguese");
    
  int  num1, num2, num3;
    
    cout << "\n---Divis�veis---\n";
    
  cout << "\nDigite um n�mero: " ;
  cin >> num1;
  
  cout << "\nDigite o primeiro divis�vel: " ;
  cin >> num2;
  
   cout << "\nDigite o segundo divis�vel: " ;
   cin >> num3;
   
   if( num1 % num2 == 0 && num1 % num3 == 0 ){
      cout << "\nVoc� acertou os dois divis�veis\n" ;
      
   } else if (num1 % num2 == 0 && num1 % num3 != 0){
       cout << "\nVoc� acertou apenas o primeiro divis�vel\n";
       
   } else if (num1 % num2 != 0 && num1 % num3 == 0){
       cout << "\nVoc� acertou apenas o segundo divis�vel\n";
       
   }
   	else{
       cout << "\nVoc� n�o acertou nenhum divis�vel\n";
   }
   
 return 0;
    
}
