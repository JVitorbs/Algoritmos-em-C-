#include <iostream>
using namespace std;

bool todos_impares(int x);

int main() {
  int x;

  cin >> x;

  if(todos_impares(x) == true){
    cout << x << " e formado apenas por digito(s) impar(es)" << endl;
  }

  else{
    cout << x << " nao e formado apenas por digito(s) impar(es)" << endl;
  }

  return 0;
}


bool todos_impares(int x){
  int resto;
  bool resultado;

  resto = x%10;

  if(resto == 0){
    resultado = true;
  }

  else if(resto%2 == 0){
    resultado = false;
  }
  else{
    resultado = todos_impares(x/10);
  }
  
  return resultado;
}