#include <iostream>

using namespace std;

bool num_primo(int x);

int main() {
  int n;
  
  cin >> n;

  if(num_primo(n) == true){
    cout << n << " é primo" << endl;
  }

  else{
    cout << n << " não é primo" << endl;
  }
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