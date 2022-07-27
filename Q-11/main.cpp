/* Elabore um algoritmo que preencha automaticamente um vetor de 20 posições de inteiros gerando os 
elementos a partir da multiplicação do seu índice por 2. Em seguida, calcule e escreva a soma dos elementos 
pares e impares.*/
#include <iostream>
using namespace std;
int main() {
  int tam=5, elementos=0, i, g=0;
  int vetor[tam];
  cout<<"element: "<<endl;
  for(i=1; i<=tam; i++){
    elementos= i;
    vetor[i]=elementos;
   cout<<" "<<vetor[i];

  } 
  
  cout<<"\nelement: "<<endl;
   for(i=1; i<=tam; i++){
   g=vetor[i]%2;
   if(g==0){
     cout<<" "<<vetor[i];
  }
  } 
  
 
 // for(i=1; i<=tam; i++){
 //   g=vetor[i]%2;
 //   if(g==0){
    
 //     cout<<""<<vetor[i];
 //  }
 //  } 
  
}
 
  /*Elabore um algoritmo que preencha automaticamente um vetor de 20 posições de inteiros gerando os 
elementos a partir da multiplicação do seu índice por 2.*/
