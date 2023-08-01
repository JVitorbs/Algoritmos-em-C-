#include <iostream>
#include <cmath>
using namespace std;

void le_vet(int v[], int n);
float calcula_prod_int(int u[], int n);

int main() {
  int tam;
  cin >> tam;

  int vet1[tam];

  le_vet(vet1, tam);


  cout << "A norma eh: " << calcula_prod_int(vet1, tam) << endl;

  
}

void le_vet(int v[], int n){
  int i;

  for(i = 0; i < n; i++){
    cin >> v[i];
  }
}

float calcula_prod_int(int u[], int n){
  int i,  soma_quad = 0;
  float norma;
  for(i = 0; i < n; i++){
    soma_quad = soma_quad + (u[i]*u[i]);
  }
  
  norma = sqrt(soma_quad)
  
  return norma;
}