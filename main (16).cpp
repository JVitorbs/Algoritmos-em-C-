#include <iostream>

using namespace std;

bool num_primo(int x);
void calcula_primos(int a, int b, int &p, int &np);

int main() {
  int num1, num2;

  cin >> num1 >> num2;

  
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

void calcula_primos(int a, int b, int &p, int &np){
  
}