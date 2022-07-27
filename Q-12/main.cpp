/*Elabore um algoritmo que leia um vetor V de 10 posições de inteiros, não permitindo que sejam digitados 
números negativos. Em seguida, leia um número inteiro qualquer e verifique se o número existe no vetor. Se 
existir, informe o seu índice. Se não existir, informe a mensagem “Número não localizado!”.*/
#include <iostream>
using namespace std;
int main() {
int l=3;
int V[l],i,n, N, numero;
  for(i=1;i<=l;i++){
    do{
      cout<<"Digite o "<<i<<"° elemento do V:"<<endl;
      cin>>V[i];
    } while(V[i]<0);   
  }
  cout<<"Digite um N° para verificar se há no vetor:"<<endl;
  cin>>N;

 for(i=1; i<=l; i++){    
  
    if(V[i]== N){
      numero= V[i]; 
      cout<<"O numero Esta localizado no "<<i<<"° indice do vetor";  
     
    } 
  } if(V[i]!=N ){
      cout<<"\nNumero não localizado!";
      } 
}
  
  
  // for(n=1;i<=l;n++){
  //    V[n]=N;
  //   if(V[n]==N){
      
  //   }
  //    cout<<" "<<V[n];
  //   }
  
 
