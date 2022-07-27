#include <iostream>
using namespace std;
int main() {
  int tam=5, i;
  int vetorA[tam], vetorB[tam];
  for(i=0; i<=tam; i++){  
   cout << "Digite os elementos do vetor:\n";
   cin>>vetorA[i];
  }
  cout << "Vetor A:"<<endl;
  for(i=0; i<=tam; i++){
    vetorA[i]=vetorA[i];
    cout<<" "<<vetorA[i];
    cout << ",";
  }
  cout << "\nVetor B:"<<endl;
  for(i=0; i<=tam; i++){
    vetorB[i]= vetorA[tam-i];
    cout<<" "<<vetorB[i];
    cout << ",";
  }

  }