#include <iostream>
using namespace std;

int fatorial(int a);

int termo(int i, int j);

void imprime_triangulo(int linhas);

int main() {
int n;
  cout << "Digite o número de linhas" << endl;
  cin >> n;

  imprime_triangulo(n);

  return 0;
}

int fatorial(int a){
int i, r;
  r=1;
for (i=1; i<= a ; i++){
  r = r * i;
}
return r;
}

int termo(int i, int j){
  int fat;
fat = fatorial(i)/(fatorial(j)*fatorial(i-j));

  return fat;
}

void imprime_triangulo(int linhas){
  int i, j;

  for(i=0; i< linhas ; i++){
    for(j=0 ; j < i ; j++){
      cout << termo(i,j) << " ";
    }
    cout << endl;
  }
}