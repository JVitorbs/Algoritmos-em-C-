#include <iostream>
using namespace std;

int main() {
  int num1, num2, conta;
  char operacao;
  
  cout << "digite o primeiro valor" << endl;
  cin >> num1;

  cout << "Digite o segundo valor" << endl;
  cin >> num2;

  cout << "Digite a operacao desejada" << endl;
  cin >> operacao;

  if(operacao == +){
    conta = num1+num2;
  }

  cout<< conta << endl;
}