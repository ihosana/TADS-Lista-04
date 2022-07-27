/*Elabore um algoritmo para ler um vetor A de 20 números inteiros e obter a maior diferença entre dois
elementos consecutivos desse vetor. Ao final, escreva a maior diferença e os índices dos respectivos
elementos.*/

#include <iostream>
using namespace std;
int main() {
  int tam=5, i, t, diferenca,  maior_dif=0, dif, indice_maior=0;
  int V_A[tam];

  for(i=1; i<=tam; i++){
    cout << "Digite os elementos do vetor\n";
    cin>>V_A[i];
    /*e obter a maior diferença entre dois
    elementos consecutivos desse vetor.*/
   
    diferenca= V_A[i];
  
   if(diferenca> maior_dif){
      maior_dif= diferenca;
     indice_maior=i;
    }
  }
  cout << "A maior diferença: "<<maior_dif<<endl;
  cout << "Indice: "<<indice_maior<<endl;
}
    