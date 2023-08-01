#include <iostream>

using namespace std;

bool num_primo(int x);

bool primo_primo(int a);

int main() {
  int n;
  
  cin >> n;
  
  if(primo_primo(n) == true){
    cout << n << " e " << (n + 4) <<  " sao primos primos" << endl;
  }
  else{
    cout << n << " e " << (n + 4) <<  " nao sao primos primos" << endl;
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

bool primo_primo(int a){
  int b;
  b = a+4;
  if(num_primo(a) == true && num_primo(b) == true){
    return true;
  }
  else{
    return false;
  }
}