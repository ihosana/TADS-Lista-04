#include<iostream>
using namespace std;
int main(){
	int tam_A=3, tam_B=4, i, cont;
	int vetor_A[tam_A], vetor_B[tam_B], igual[tam_A];
	bool verif=false;
	
	/* Elabore um algoritmo que leia dois vetores,
   A (10 elementos inteiros) e B (12 elementos inteiros),*/
  for(i=1; i<=tam_A; i++){
	 cout<<"Insira o "<<i<<"° valor do vetor A:"<<endl;
     cin>>vetor_A[i];
   }
  for(i=1; i<=tam_B; i++){
	 cout<<"Insira o "<<i<<"° valor do vetor B:"<<endl;
     cin>>vetor_B[i];
   }  
   
 /*e escreva todos os elementos comuns aos dois vetores.*/
	/* para cada elemento PEGAR vetorA == vetorB se igual imprima, senão att */
 cout<<" elemento A:"<<endl;
  for(i=1; i<=tam_A; i++){
   cout<<" "<<vetor_A[i];
   cout<<",";
  }
 cout<<"\n elemento B:"<<endl;
 for(i=1; i<=tam_B; i++){
   cout<<" "<<vetor_B[i];
   cout<<",";
 }
 cout<<"\nElementos em comuns"<<endl;
  //verificar se o elemento de A é igual a algum elemnto de B
 for(i=1; i<=tam_B; i++){
   for(cont=1; cont<=tam_A; cont++){             
     if(vetor_B[i]== vetor_A[cont]){
       igual[cont]= vetor_B[i]; 
       cout<<" "<<igual[cont];
       cout<<",";
      }
    }
  } 
 
}
/*
para (Inicio= 0; inicio<= 6; inicio++ ){
SE(t=(A=B) || (A!=B)){
imprimir "";
}
SENAO{

}
}*/

   /*
  igual[i]=(vetor_A[i]== vetor_B[i]) ;
   cout<<" "<<igual[i];*/

   



