#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  cin >> a;
  cin >> b;
  cin >> c;
  
//Para o primeiro sendo o meio
  if((a > b && a < c) || (a < b && a > c)){
    cout << a << endl;
  }
//para o segundo sendo o meio
  else if((b > a && b < c) || (b < a && c < b)){
    cout << b << endl;
  }
//para o terceiro sendo o meio
  else if((c > a && c < b) || (c < a && c > b)){
    cout << c << endl;
  }
//para nenhum sendo o meio
  else{
    cout << "Nao existe" << endl;
  }
  
  return 0;
}

//Implemente um programa que receba como entrada 3 números inteiros. O programa deve exibir o número que não é nem o menor e nem o maior dos três. Caso ele não exista, o programa deve exibir a mensagem "Nao existe" seguido de uma quebra de linha.