#include <iostream>
using namespace std;

int main () {
  // Hacer un programa que dibuje n columnas
  // utilizando un símbolo.
  // Dame el numero : 5
  // Dame el simbolo : +
  // +++++
  // Dame el numero : 7
  // Dame el simbolo : ?
  // ???????
  char simbolo;
  int numero;

  cout << "Dame el numero : ";
  cin >> numero;
  cout << "Dame el simbolo : ";
  cin >> simbolo;

  for (int n = 0; n < numero; n++) {
    cout << simbolo;
  }
  cout << endl;
  }