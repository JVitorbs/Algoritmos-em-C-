#include <iostream>
#include <iomanip>

using namespace std;

double num_pi(int rep);

int main() {
  int n;

  cin >> n;

  cout << setprecision(8) << num_pi(n) << endl;
  
  return 0;
}

double num_pi(int rep){
  int c, i;
  double pi, soma;
  
  c = -1;
  soma = 0;

   for(i = 1; i<=rep; i++){
    c = c + 2;

    if(i%2==0){
      soma = soma - (4.0/c);
    }

    else{
      soma = soma + (4.0/c);
    }
    
    pi = soma;
  
  }
  return pi;
}