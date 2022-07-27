/*. Escreva um algoritmo que leia uma matriz M(5,5) e calcula as somas abaixo, escreva essas somas e a matriz.
a) da linha 4 de M
b) da coluna 2 de M
c) da diagonal principal
d) da diagonal secundária
e) de todos os elementos da matriz M*/

#include <iostream>
using namespace std;
int main() {
  int tamanho=5, dados_M, SOMA_e=0, SOMA_a=0, Soma_Coluna=0,   
  Soma_Diagonal1=0;
  int M[tamanho][tamanho];

  
  for(int linha=0; linha<tamanho; linha++){
  
    for(int coluna=0; coluna<tamanho; coluna++ ){
      cout<<"Digite os elementos: "<<endl;
      cin>>dados_M;
      M[linha][coluna]= dados_M;
      /*e) de todos os elementos da matriz */
      SOMA_e+= dados_M;
        /*a)A SOMA da linha 4 de M*/
       SOMA_a= M[3][0]+M[3][1]+M[3][2]+M[3][3]+M[3][4];
      /*b) da coluna 2 de M*/
      Soma_Coluna= M[0][1]+M[1][1]+M[2][1]+M[3][1]+M[4][1];
      Soma_Diagonal1=M[0][1]+M[1][2]+M[2][3]+M[3][3]+M[4][4];
    }
  }
  cout<<"A matriz: "<<endl;
  for(int linha=0; linha<tamanho; linha++){
    for(int coluna=0; coluna<tamanho; coluna++ ){
     cout<<"[ "<<M[linha][coluna]<<" ]";
    }
    cout<<"\n";
  }
cout<<"\nA Soma da diagonal principal:  "<<Soma_Diagonal1<<endl;
cout<<"\nA Soma da coluna 2:  "<<Soma_Coluna<<endl;
cout<<"\nA Soma da linha 4:  "<<SOMA_a<<endl;
cout<<"A soma dos elementos da matriz:  "<<SOMA_e;

}