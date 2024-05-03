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
  int auxiliar = 1, cont = 1, aux = 1;
  cout << "Niveles: " ;
  cin >> nivel;

  for (int m = 0 ; m < nivel; m++) {
    // cout << "m " << m  << " columnas : "<< (m + 1)<< endl;
    auxiliar = 1;
    for (int n = 0; n < (m +1); n++) {
      //cout << "* ";
      cout << auxiliar << " ";
      auxiliar++;
    }
    cout << endl;
  }

}