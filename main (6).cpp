#include <iostream>

using namespace std;

int main() {
  int cont, i, n;
  
  cont = 0;
  
  cin >> n;
  
  for(i=1; i<=n; i++){
    if(n%i == 0){
      cont = cont+1;
    }
  }

  if(cont==2){
    cout << n << " é primo" << endl;
  }

  else{
    cout << n << " não é primo" << endl;
  }
  return 0;
}