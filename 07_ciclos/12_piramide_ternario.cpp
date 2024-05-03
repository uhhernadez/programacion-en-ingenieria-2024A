#include <iostream>
using namespace std;

int main () {
  // Niveles: 2
  // 1
  // 2 3
  //
  // Niveles: 4
  // 1
  // 2 3 
  // 4 5 6
  // 7 8 9 10
  int nivel;
  int aux = 1;
  cout << "Niveles: " ;
  cin >> nivel;
  /*
  int x = (nivel < 0)? 1 : nivel;

  if (nivel < 0 ) {
    x = 1;
  } else {
    x = nivel;
  }
  */

  for (int m = 0 ; m < nivel; m++) {
    // cout << "m " << m  << " columnas : "<< (m + 1)<< endl;
    for (int n = 0; n < (m +1); n++) {
      //cout << "* ";
      cout << aux << " ";
      aux = (aux == 0)? 1 : 0;
    }
    cout << endl;
  }
  
}