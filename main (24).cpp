#include <iostream>
#include <cmath>
using namespace std;

void le_vet(int v[], int n);
bool pertence(int u[], int n, int val);

int main() {
  int i,tam, val;
  cout << "Insira a dimensao do vetore" << endl;
  cin >> tam;

  int vet1[tam];

  cout << "Insira o vetor" << endl;
  le_vet(vet1, tam);

  cout << "Digite o valor que quer procurar" << endl;
  cin >> val;
  
  if(pertence(vet1, tam, val)==true){
  cout << "O valor pertence ao vetor" << endl;
  }
  else{
    cout << "O valor não pertence ao vetor" << endl;
  }
  
}

void le_vet(int v[], int n){
  int i;

  for(i = 0; i < n; i++){
    cin >> v[i];
  }
}

bool pertence(int u[], int n, int val){
  int i;
  bool condic=false;
  for(i = 0; i < n; i++){
    if(u[i]==val){
      condic=true;
      break;
    }
    else{
      condic = false;
    }
  }

  return condic;
}