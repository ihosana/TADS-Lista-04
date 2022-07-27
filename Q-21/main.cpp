/*21. Elabore um algoritmo que leia duas matrizes M(4,6) e N(4,6) e crie uma matriz que seja: 
a) o produto de M por N;
b) a soma de M com N;
c) a diferença de M com N;
Escrever as matrizes calculadas.*/

#include <iostream>
using namespace std;
int main() {
  int tam_L=3, tam_C=2;
  int M[tam_L][tam_C], N[tam_L][tam_C], Matrix[tam_L][tam_C];
  int dado, dado2; 
  /* Elabore um algoritmo que leia duas matrizes M(4,6) e N(4,6) */
  /*MATRIZ M: */
  for(int i=0; i<tam_L; i++){    
    for(int j=0; j<tam_C; j++){
      cout<<"Ⓜ️ Digite os valores da Matrix M: "<<endl;
      cin>>dado; 
      M[i][j]=dado;
    } 
  }
  /*MATRIZ N: */
  for(int i=0; i<tam_L; i++){    
    for(int j=0; j<tam_C; j++){
      cout<<"🆖 Digite os valores da Matrix N: "<<endl;
      cin>>dado2; 
      N[i][j]=dado2;
    } 
  }
  cout<<"🥰Matriz M:"<<endl;//printa a matriz M
 for(int i=0; i<tam_L; i++){
    for(int j=0; j<tam_C; j++){  
     cout << "[" <<M[i][j]<<"]";
    }
    cout<<"\n";
  }
  cout<<"🤩Matriz N:"<<endl;//printa a matriz N
 for(int i=0; i<tam_L; i++){
    for(int j=0; j<tam_C; j++){  
     cout << "[" <<N[i][j]<<"]";
    }
    cout<<"\n";
  }
  /*e crie uma matriz que seja: 
  a) o  PRODUTO DE M E N: */ 
  cout<<"❌ O produto da matriz M e N: "<<endl;
 for(int i=0; i<tam_L; i++){
    for(int j=0; j<tam_C; j++){
      Matrix[i][j]= M[i][j]*N[i][j] ;
     cout << "[" <<Matrix[i][j]<<"]";
    }
    cout<<"\n";
  }
  /*b) a soma de M com N;*/
  cout<<"➕ A soma da matriz M e N: "<<endl;
  for(int i=0; i<tam_L; i++){
    for(int j=0; j<tam_C; j++){
      Matrix[i][j]= M[i][j] + N[i][j] ;
     cout << "[" <<Matrix[i][j]<<"]";
    }
    cout<<"\n";
  }
  /*c) a diferença de M com N;*/
  cout<<"➖ A diferença da matriz M e N: "<<endl;
  for(int i=0; i<tam_L; i++){
    for(int j=0; j<tam_C; j++){
      Matrix[i][j]= M[i][j] - N[i][j] ;
     cout << "[" <<Matrix[i][j]<<"]";
    }
    cout<<"\n";
  }
}



  // for(i=0; i<=3; i++){
  //   for(j=0; j<=5; j++){
  //    M[i][j]=j;
      
  //   cout << "[" <<M[i][j]<<"]";
  //     if(j>4){
  //       cout<<" "<<endl;
  //     }
  //   }
  // }
  //  cout<<"Matriz N: "<<endl;
  // for(i=0; i<=3; i++){
  //   for(j=0; j<=5; j++){
  //    N[i][j]=j;
      
  //   cout << "[" <<N[i][j]<<"]";
  //     if(j>4){
  //       cout<<" "<<endl;
  //     }
  //   }
  // }