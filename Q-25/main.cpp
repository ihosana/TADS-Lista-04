/* Escreva um algoritmo que leia uma matriz A(15,5) e a escreva. Verifique, a seguir, quais os elementos de A 
que estão repetidos e quantas vezes cada um está repetido. Escrever cada elemento repetido com uma 
mensagem dizendo quantas vezes cada elemento aparece em A.*/

#include <iostream>
using namespace std;
int main() {
  int linha=3, coluna=2;
  int A[linha][coluna], elementos, dado=0, cont=0, identico[linha][coluna];
  for(int i=0; i<linha; i++){
    for(int j=0; j<coluna; j++){   
     cout << "Digite os elementos\n";
     cin>>elementos;   
     
     A[i][j]=elementos;
       // dado=A[i][j];
    }
  }
 /* Verifique, a seguir, quais os elementos de A 
que estão repetidos e quantas vezes cada um está repetido. */
/*Para verificar os numeros que estão se repetindo basta pegar o elemento digitado e olhar na matriz */

  
  cout<<"A matriz 'A' "<<endl;
    for(int i=0; i<linha; i++){
    for(int j=0; j<coluna; j++){   
     cout << " "<<A[i][j];
    }
      cout<<"\n";
  }
  
}