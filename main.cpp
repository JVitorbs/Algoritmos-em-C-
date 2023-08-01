#include <iostream>
using namespace std;

int main() {
  int A, B;

  cin >> A;
  cin >> B;

  if(B%A == 0){
    cout << A << " é divisor de " << B << endl;
  }

  else{
    cout << A << " não é divisor de " << B << endl;
  }
  
  return 0;
}

//Implemente um programa que receba como entrada 3 números inteiros. O programa deve exibir o número que não é nem o menor e nem o maior dos três. Caso ele não exista, o programa deve exibir a mensagem "Nao existe" seguido de uma quebra de linha.