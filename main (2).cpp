#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int a, b, c, del;
  cin >> a;
  cin >> b;
  cin >> c;
  if(a != 0 && b != 0 && c != 0){
    del = ((pow(b, 2))-(4*a*c)); 
  }
  
  if(del == 0){
    cout << "Duas raizes reais iguais" << endl;
  }

  else if(del > 0){
    cout << "Duas raizes reais distintas" << endl;
  }

  else{
    cout << "Duas raizes complexas" << endl;
  }
  
  return 0;
}

//Implemente um programa que receba como entrada 3 números reais diferentes de 0 referentes aos coeficientes de um polinômio de segundo grau . O programa deve exibir uma mensagem informando se o polinômio possui 2 raízes reais distintas, 2 raízes reais iguais ou 2 raízes complexas, de acordo com o valor de delta: caso delta seja positivo, o polinômio possui duas raízes reais distintas; caso seja negativo, o polinômio possui duas raízes complexas; caso seja zero, o polinômio possui duas raízes reais iguais. Lembre-se que Um exemplo de execução do programa segue abaixo