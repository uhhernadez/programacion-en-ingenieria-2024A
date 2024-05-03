#include <iostream>
using namespace std;

int main () {
  int nivel;
  cout << "Niveles: " ;
  cin >> nivel;
  
  for (int m = 0 ; m < nivel; m++) {
    for (int n = 0; n < nivel - m; n++) {
      cout << "*";
    }
    cout << endl;
  }
  
}