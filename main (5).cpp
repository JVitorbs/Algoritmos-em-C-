#include <iostream>
using namespace std;

int main() {
  int l, h, i, c;
  cout << "Digite a largura" << endl;
  cin >> l;
  cout << "Digite a altura:" << endl;
  cin >> h;
  
  for(i = 1 ; i <= h ; i++){
    cout << endl;
    for(c = 1 ; c <= l ; c++){
      cout << "*";
    }
  }
}