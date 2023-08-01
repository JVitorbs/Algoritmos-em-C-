#include <iostream>
using namespace std;

int main() {
  int n, res, i;

  cout << "Digite um numero inteiro" << endl;
  cin >> n;
  cout << "A tabuada de " << n << " eh essa:" << endl;

  for(i = 1; i<=10; i++){
    res = n*i;
    cout << n << " x " << i << " = " << res << endl; 
  }
  return 0;
}