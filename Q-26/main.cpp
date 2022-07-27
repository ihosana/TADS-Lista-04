/*Escreva um algoritmo que leia uma matriz M(12,13) e multiplique todos os 13 elementos de cada uma das 
12 linhas de M pelo maior elemento daquela linha. Escreva a matriz lida e a modificada*/
#include <iostream>
using namespace std;
int main(){
  int linha=3, coluna=4, dado, maior_indice , i, j;
  int matriz[linha][coluna], M_nova[linha][coluna];
  for( i=0; i<linha; i++){
    for( j=0; j<coluna; j++){
      cout<<"Digite os elementos"<<endl;
      cin>>dado;
      matriz[i][j]=dado;
    }
  }  
    cout<<"a MATRIZ lida: \n";
  for( i=0; i<linha; i++){
    for( j=0; j<coluna; j++){
     cout<<"["<<matriz[i][j]<<"]";
    }  
    cout<<"\n";
  }
    for( i=0; i<linha; i++){
      maior_indice=matriz[i][0];
      for( j=0; j<coluna; j++)
      {
       if(matriz[i][j] > maior_indice){
         maior_indice=matriz[i][j];
      }
         for(int t=0; t<coluna; t++){
       matriz[i][j]=matriz[i][j]*maior_indice;
         } 
    }
  }  
    cout<<"a MATRIZ alterada: \n";
     for( i=0; i<linha;i++){
        for( j=0; j<coluna; j++){
           cout<<"["<<matriz[i][j]<<"]";
         }
        cout<<"\n";
      }


}

    // for(int indice=0; indice<linha;indice++){
    //      for(int lado=0; lado<coluna; lado++){
    //        M_nova[indice][lado]=maior_indice * matriz[indice][lado];
    //      }
    
  
    
   
 
  // for(int indice=0; indice<linha;indice++){
  //        for(int lado=0; lado<coluna; lado++){
  //          M_nova[indice][lado]=maior_indice * matriz[indice][lado];
  //        }
  //      }
  
  // for(int i=0; i<linha; i++){
  //   for(int j=0; j<coluna; j++){
  //   if(matriz[i][j] > maior_indice && j<=coluna){
  //      maior_indice=matriz[i][j];
    
  //   }
  // }
/*  if(matriz[i][j] > maior_indice && j<coluna){
       maior_indice=matriz[i][j];
     }*/

    