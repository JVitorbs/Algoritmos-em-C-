#include <iostream>
using namespace std;

bool num_primo(int x);

void conta_digitos(int x, int &digitos, int &primos);

int main() {
  int n, digitos, primos;
  
  cin >> n;

  conta_digitos(n, digitos, primos);

  cout << digitos << " digito(s) sendo ";
  cout << primos << " primo(s)";
  
  return 0;
}

bool num_primo(int x){
  int cont, i;

  cont = 0;
  for(i=1; i<=x; i++){
    if(x%i == 0){
      cont = cont+1;
    }
  }

  return (cont==2);
}

void conta_digitos(int x, int &digitos, int &primos){
  int  r, i, d, cont;
  digitos = 0;
  d = 10;
  primos=0;
  
  while(x != 0){
    r = x%d;
    x = x/d;

    if(num_primo(r) == true){
    primos++;
    }
    
    digitos = digitos+1;
  }
  
}

/*Implemente uma função que receba como parâmetro de entrada um número inteiro x.
A função a ser implementada deve armazenar em um parâmetro de saída o total
de dígitos de x e em um segundo, o total de dígitos primos de x.

A função main do seu programa deve ler um número inteiro positivo do usuário e
chamar a função implementada, exibindo uma mensagem com o resultado
como mostrado abaixo.*/