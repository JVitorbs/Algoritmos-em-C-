#include <iostream>

using namespace std;

void le_vet(char v[], int n);
int posicao(char u[], int n, char letra);

int main() {
  int tam;
  char letra;

  cin >> tam;

  char vet1[tam];

  le_vet(vet1, tam);

  cin >> letra;
  
  if(posicao(vet1, tam, letra) >= 0){
  cout << "Posicao da primeira ocorrencia: " << posicao(vet1, tam, letra) << endl;
  }
  else{
  	cout << "Caractere nao ocorre no vetor" << endl;
  }
  
  return 0;
}

void le_vet(char v[], int n){
  int i;

  for(i = 0; i < n; i++){
    cin >> v[i];
  }
}

int posicao(char u[], int n, char letra){
  int i, pos;
  for(i = 0; i < n; i++){
    if(u[i]==letra){
      pos = i;
      break;
    }
    else{
    	pos = -1;
    }
  }

  return pos;
}