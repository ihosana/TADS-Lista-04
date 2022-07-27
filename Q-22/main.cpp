/* Elabore um algoritmo que leia uma matriz M(6,6) e um valor A inteiro e multiplique a matriz M pelo valor A 
inserindo os resultados em um vetor de V(36). Ao final, escreva o vetor V.*/
#include <iostream>
using namespace std;
int main() {
  int tamanho_V=3,Vetor[tamanho_V];
  int tam=3, base, valor_A;
  int M[tam][tam];
  for(int i=0; i<tam; i++){
    for(int j=0; j<tam; j++){
       cout << "Digite os elementos da matriz: \n";
       cin>>base;
      M[i][j]=base;
    }
  }
  cout << "Digite o valor de A: \n";
  cin>>valor_A;
    cout << "Vetor:[ ";
    for(int i=0; i<tam; i++){
    for(int j=0; j<tam; j++){
     
      Vetor[j]= M[i][j]*valor_A;
      cout<<""<<Vetor[j];
      cout<<",";
    }
    
  }
  cout<<" ]"<<endl;
  // cout<<"\nA matriz: "<<endl;
  // for(int i=0; i<tam; i++){
  //   for(int j=0; j<tam; j++){
  //      cout << "["<<M[i][j]<<"]";
  //   }
  //   cout<<"\n";
  // }
}