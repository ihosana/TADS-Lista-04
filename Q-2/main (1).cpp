#include<iostream>
using namespace std;

int main(){
	int tamanho=20, num_par;
	int vetor[tamanho], novo_vetor[tamanho], i, cont ;
	
	for(i=0; i<tamanho; i++){
		cout<<"Digite os elementos: "<<endl;
		cin>>vetor[i];
	}
      cout<<"Elementos Antigos: "<<endl;
    for(i=0; i<tamanho; i++){
 
	cout<<""<<vetor[i];
	cout<<",";
	}
	
  cout<<"\nElementos Atualizados: "<<endl;
  for(i=0; i<tamanho; i++){
  num_par=vetor[i] %2;
  if(num_par==0){
  	vetor[i]=0;
  	
  	cout<<""<<vetor[i];
  	cout<<",";
  }
  else{
  	cout<<""<<vetor[i];
    	cout<<",";
  }
  }
}
	
	