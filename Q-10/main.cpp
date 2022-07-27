#include <iostream>
using namespace std;
int main() {
  int tam=10;
  int VA[tam], AguardarA=0, VB[tam], VC[tam], i, cont, C;
  for(i=1; i<=tam; i++){
   cout << "Digite os valores de A:"<<endl;
   cin>>VA[i];
   AguardarA=VA[i]+ AguardarA;
  }
  cout<<"Soma dos elementos de A:["<< AguardarA<<"]"<<endl;
  for(cont=1; cont<=tam; cont++){
    cout << "Digite os valores de B:"<<endl;
    cin>>VB[cont];
  }
  cout << "Soma dos elementos de mesma posição:"<<endl;
  for(C=1; C<=tam; C++){
    VC[C]= VA[C]+VB[C];
    cout<<" "<<VC[C]; 
    cout<<",";
  }
}

