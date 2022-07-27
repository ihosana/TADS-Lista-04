#include <iostream>
using namespace std;
int main() {
 int tam=20;
 int vetor[tam], cod, i, vetor2[tam], cont;

 for(i=0; i<tam; i++){
    cout << "Digite o elemento do vetor!\n"<<endl;
    cin>>vetor[i];
  }
  cout<<"Digite o codigo"<<endl;
  cin>>cod; 
  if(cod==1){
   	for(i=0; i<tam; i++){
      cout<<""<<vetor[i];	
      cout<<",";
	  }
  }
  else{
   	if(cod==2){	
     for(i=1; i<=tam; i++){
       vetor2[i]= vetor[tam-i];
       cout << " "<<vetor2[i];
       cout<<",";
      }    
    }
  } 
}