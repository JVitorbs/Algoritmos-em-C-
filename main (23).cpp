#include <iostream>
#include <cmath>
using namespace std;

void le_vet(int v[], int n);
int calcula_prod_int(int u[], int v[], int n);

int main() {
  int i,tam;
  cout << "Insira a dimensao dos vetores" << endl;
  cin >> tam;

  int vet1[tam], vet2[tam];

  cout << "Insira o primeiro vetor" << endl;
  le_vet(vet1, tam);

  cout << "insira o segundo vetor" << endl;
  le_vet(vet2, tam);

  cout << "O produto interno eh: " << calcula_prod_int(vet1, vet2, tam) << endl;

  
}

void le_vet(int v[], int n){
  int i;

  for(i = 0; i < n; i++){
    cin >> v[i];
  }
}

int calcula_prod_int(int u[], int v[], int n){
  int i,  soma = 0;
  for(i = 0; i < n; i++){
    soma = soma+ (u[i]*v[i]);
  }

  return soma;
}