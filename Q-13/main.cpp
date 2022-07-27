/*. Elabore um algoritmo que:
Solicite um número inteiro N ao usuário.
Declare um vetor V com N elementos inteiros.
Gere os elementos do vetor de tal forma que o primeiro seja N e os próximos sejam sempre iguais ao dobro 
do anterior.
Solicite um número inteiro X ao usuário e busque este elemento no vetor. Caso exista, troque X pelo menor 
elemento existente no vetor e o menor elemento por X. Caso não exista, informe ao usuário.
Mostre o vetor antes e depois da mudança.
*/
#include <iostream>
using namespace std;
int main() {
 
  int elemento, i, t;
  int V2[elemento];
  /*Solicite um número inteiro N ao usuário.
Declare um vetor V com N elementos inteiros.*/  
  cout << "Digite o numero de elementos \n";
  cin>>elemento;
  int V[elemento];
  
  for(i=1;i<=elemento;i++){
    V[i]=i;
     cout<<" "<<V[i];
  }
  /*
Gere os elementos do vetor de tal forma que o primeiro seja N e os próximos sejam sempre iguais ao dobro 
do anterior.1 2 3 4 ---> 4 */
  for(t=0; t<=elemento; t++){
    V2[t]= V[elemento-t];
    cout<<" "<<V2[t];
  }
 
  
   
}