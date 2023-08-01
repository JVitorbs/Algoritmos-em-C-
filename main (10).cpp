#include <iostream>
using namespace std;

int soma_digitos(int num);

int main() {
  int n, cons;
  
  cout << "Digite um número inteiro" << endl;
  cin >> n;  
  
  cout << "A soma dos dígitos de " << n << " foi " << soma_digitos(n) << endl;
  
  return 0;
}

int soma_digitos(int num){
  int r, i, soma;
  soma = 0;
  i = 0;

  do{
    r = num%10;
    num = num/10;

    soma = soma + r;
    i++;
  } while(num != 0);

  return soma;
}
//Escreva um programa que lê um número inteiro n e imprime a soma dos dígitos desse número.