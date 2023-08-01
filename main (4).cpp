#include <iostream>
using namespace std;

int main() {
  int N, n, res, i;
  
  for(N = 1; N <=10;  N++){
    cout << "A tabuada de " << N << " eh essa:" << endl;
    i = 0;
    i = i+1;
    n = N;
    while(i<=10){
      res = n*i;
      cout << n << " x " << i << " = " << res << endl; 
      
      i = i+1;
    }
    cout << "" << endl;
  }
  return 0;
}