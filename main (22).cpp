#include <iostream>
using namespace std;

int calcula_resto(int a, int b);

int main() {
  int a, b;

  cin >> a >> b;

  cout << "Resto da divisao entre " << a << " e " << b << ": " << calcula_resto( a, b);

  return 0;
}

int calcula_resto(int a, int b){
  int resto;

  if(a == 0){
    return 0;
  }
  else if(a-b<b){
    resto = a-b;
    return resto;
  }
  else{
    resto = a-b;
    a = resto;
    return calcula_resto(resto, b);
  }
  
}