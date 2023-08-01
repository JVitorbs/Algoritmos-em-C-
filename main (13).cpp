#include <iostream>
using namespace std;

int calcula_MMC(int A, int B);

int main() {
  int a, b;
  cin >> a >> b;

  cout <<  "O mmc de " << a << " e " << b << " é " << calcula_MMC(a,b);
  
  return 0;
}

int calcula_MMC(int A, int B){
  int Mul, Maior;
  
  if(A >= B){
    Maior = A;
  }
  else{
    Maior = B;
  }

  Mul = Maior;

  while((Mul%A != 0) || (Mul%B != 0)){
    Mul = Mul+1;
  }

  return Mul;
}