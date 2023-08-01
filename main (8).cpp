#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int n, c, i;
  double pi, soma;
  
  c = -1;
  soma = 0;

  cin >> n;
    
  for(i = 1; i<=n; i++){
    c = c + 2;

    if(i%2==0){
      soma = soma - (4.0/c);
    }

    else{
      soma = soma + (4.0/c);
    }
    
    pi = soma;
  
  }
  
  cout << setprecision(8);
  cout << pi << endl;
  
  return 0;
}