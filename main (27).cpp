#include <iostream>
using namespace std;

void le_vet(int v[], int n);
void concatena_vetores(int u[], int n1, int v[], int n2, int conca[], int tamconc);

int main() {
  int i,tam1, tam2, tamconc;
  
  cin >> tam1;
  int vet1[tam1];
  le_vet(vet1, tam1);
  
  cin >> tam2;
  int vet2[tam2];
  le_vet(vet2, tam2);

  tamconc = tam1+tam2;
  int conca[tamconc];
  

  

  concatena_vetores(vet1, tam1, vet2, tam2, conca, tamconc);

  cout << "Concatenacao:" << endl;
  
  for(i = 0; i < tamconc; i++){
  	cout << conca[i] << " ";
  }

  return 0;
}

void le_vet(int v[], int n){
  int i;

  for(i = 0; i < n; i++){
    cin >> v[i];
  }
}

void concatena_vetores(int u[], int n1, int v[], int n2, int conca[], int tamconc){
  int i, j = 0;
  for(i = 0; i < tamconc; i++){
    if(i < n1){
      conca[i] = u[i];
    }

    else{
      conca[i] = v[j];
      j++;
    }
  }
}