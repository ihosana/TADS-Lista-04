#include <iostream>
using namespace std;
int main() {
  int elem=10, i;
  int vet_A[elem], P[elem], resto, cont;
  for(i=1; i<=elem; i++){
    cout << "Digite o "<<i<<"° elemento de A:"<<endl;
    cin>>vet_A[i];
  }
  cout<<"P=[";
  for(i=1; i<=elem; i++){
    resto=vet_A[i]%2;
    if(resto==0){
         P[cont]=i;
        cout<<" "<<P[cont];
        cout<<",";
      
    }
  }
   cout<<"]";
}


/*Elabore um algoritmo que leia um vetor A de 10 elementos e construa um vetor P formado pelos índices dos 
elementos pares de A. Exemplo: Se A = [1 3 6 7 8], seus elementos pares estão nos índices 2 e 4 . Assim, P 
= [2 4].
*/