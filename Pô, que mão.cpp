#include<iostream>
using namespace std;
//Usei um Codigo de quicksort aqui porque ja tinha pronto :)
void Quick(int vetor[10], int inicio, int fim){
   int pivo, aux, i, j, meio;
   i = inicio;
   j = fim;
   meio = (int) ((i + j) / 2);
   pivo = vetor[meio];
   do{
      while (vetor[i] < pivo) i = i + 1;
      while (vetor[j] > pivo) j = j - 1;
      if(i <= j){
         aux = vetor[i];
         vetor[i] = vetor[j];
         vetor[j] = aux;
         i = i + 1;
         j = j - 1;
      }
   }while(j > i);
   if(inicio < j) Quick(vetor, inicio, j);
   if(i < fim) Quick(vetor, i, fim);   
}
int main (){
	int N = 0 , cont = 0 ;
	int V[3];
	cin>>N;
	//Recebe o numero de Doces
	for (int i = 0; i < 3 ; i++){
		cin>>V[i];
		//Recebe os 3 numeros 
	}
	Quick(V,0,2);
	//Passo o vetor para o quickSort informando o inicio e fim
	if(0 <= N <= 1000){
		//Faço a verificaçao de N
		for(int i=0;i<3;i++){
			if(1 <= V[i] <= 1000){
				//Verificaçao dos 3 valores
				N -= V[i];
				if(N >= 0){
					cont++;
				}
			}	
		}
	}
	cout<<cont;
	//Exibo meu Resultado 
	return 0 ;
}
