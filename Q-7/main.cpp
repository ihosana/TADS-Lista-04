#include <iostream>
using namespace std;
int main() {
  int tam=9, i;
  int v_A[tam], v_B[tam], AuB[tam];
  //lendo os elemnetos de A e B
  for(i=0; i<=tam; i++){
      cout << "Digite o "<<i<<"° elementos de A"<<endl;
      cin>>v_A[i];
  }
  for(i=0; i<=tam; i++){
      cout << "Digite o "<<i<<"° elementos de B"<<endl;
      cin>>v_B[i];
  }
  // multiplicar os valores de mesmo indice
  // ex: A:1, 2, 3 e B: 1, 2, 3---> AUB= 1, 4, 9 
  cout << "AuB é = ";
  for(i=0; i<=tam; i++){
    AuB[i]= v_A[i] * v_B[i]; 
    cout << " "<<AuB[i];
    cout<<",";  
  }
}