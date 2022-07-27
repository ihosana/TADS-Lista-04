#include <iostream>
using namespace std;
int main() {
  int tamanho=19, i, elementos;
  int vetorA[tamanho];

//ler os elementos----->
for(i=0; i<=tamanho; i++){
  cout<<"Digite os elementos"<<endl;
  cin>>vetorA[i];
  }
  
//trocar o 1° elemento com o ultimo...e etc------>
//1,2,3-----> 3,2,1. 20, 21, 22, 23---> 23,22, 21 20---> 30, 35 ,36, 37--->37, 36, 35, 30
for(i=0; i<=tamanho; i++){
  elementos= vetorA[tamanho-i];

  cout<<" "<<elementos;
  cout<<",";
}
  
  }