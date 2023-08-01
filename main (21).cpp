#include <iostream>
using namespace std;

int calcula_termo(int n);

int main() {
  int n;

  cin >> n;

  cout << "Termo " << n << " da sequencia e " << calcula_termo(n) << endl;

  return 0;
}

int calcula_termo(int n){
  if(n ==0){
    return 1;
  }
  else if(n ==1){
    return 2;
  }

  else{
    return (2*calcula_termo(n-2)+(calcula_termo(n-1)));
  }
}
