/* Escreva um algoritmo que leia um número inteiro A e uma matriz M (30,30) de inteiros. Conte quantos 
valores da matriz M são iguais a A. Crie, a seguir, uma matriz X contendo todos os elementos de M diferentes 
de A (quando for igual a A, insira um 0). Mostre os resultados.*/

#include <iostream>
using namespace std;
int main() {
 int tamanho=3;
 int A, Matriz[tamanho][tamanho], dados_matriz, cont=0, X[tamanho][tamanho];
  /*Escreva um algoritmo que leia um número inteiro A e uma matriz M (30,30) de 
 inteiros.*/
 cout << "Digite um número inteiro: \n";
 cin>>A;
 for(int i=0; i<tamanho; i++){
   for(int j=0; j<tamanho; j++){
      cout << "Digite os elementos da matriz: \n";
      cin>>dados_matriz;
      Matriz[i][j]=dados_matriz;
      /*Crie, a seguir, uma matriz X contendo todos os elementos de M 
      diferentes de A (quando for igual a A, insira um 0).*/
      if(Matriz[i][j]==A){
        Matriz[i][j]=0;
        X[i][j]=Matriz[i][j]; 
      }
      else{
        X[i][j]=Matriz[i][j]; 
      }
    }
 }/*Conte quantos 
 valores da matriz M são iguais a A.*/
  // cout<<" "<<cont;
//Imprime a Matriz alterada---->
 cout<<" Matriz X: "<<endl;
  for(int i=0; i<tamanho; i++){
   for(int j=0; j<tamanho; j++){
      cout << "[ "<<X[i][j]<<" ]";
     
    }
    cout<<"\n";
  }
  
  
}