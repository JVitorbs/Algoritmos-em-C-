#include <iostream>
using namespace std;

int main() {
  int n, r, i, soma, cons;
  soma = 0;
  i = 0;
  
  cin >> n;  

  cons = n;
  
  do{
    r = n%10;
    n = n/10;

    soma = soma + r;
    i++;
  } while(n != 0);
  
  cout << "A soma dos dígitos de " << cons << " foi " << soma << endl;
  
  return 0;
}

//Escreva um programa que lê um número inteiro n e imprime a soma dos dígitos desse número.