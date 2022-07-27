#include <iostream>
using namespace std;
int main() {
  int tam=15, i, elemento_escolhido, par, impar=0, cont;
  int vetor[tam];
  for(i=0; i<tam; i++){
    cout <<"😶Digite os elementos do vetor\n"; 
    cin>>vetor[i];
  }
  cout<<"🤔Deseja ver qual numero do vetor?1-par, 2-impar"<<endl; 
  cin>>elemento_escolhido;
  if(elemento_escolhido==1){
    for(i=0; i<tam; i++){
      par=vetor[i] %2;
      if(par==0){
        cout<<""<<vetor[i];
          cout<<" ,";
      }
    }  
  }
  else{
    if(elemento_escolhido==2){
      for(i=0; i<tam; i++){
       impar=vetor[i] %2;
       if(impar==1){
          cout<<""<<vetor[i];
          cout<<" ,";
        }
      }
       
    }else{
      cout<<"erro"<<endl;
    } 
  } 
}