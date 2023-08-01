#include <iostream>

using namespace std;

int quociente(int a, int b);

int main() {
  int divid, divisor;
  
  cin >> divid >> divisor;
  
  cout << quociente(divid, divisor) << endl;
  
  return 0;
}

int quociente(int a, int b){
  int i;
  for(i=0 ; a >= b; i++){
    a = a - b;
  }
  return i;
}