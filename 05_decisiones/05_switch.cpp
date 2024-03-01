#include <iostream>
using namespace std;

int main () {
  int sel = 1;
  cin >> sel;
  switch (sel) {
    case 1: cout << "Se selecciono el caso 1" << endl; break;
    case 2: cout << "Se selecciono el caso 2" << endl; break;
    case 3: cout << "Se selecciono el caso 3" << endl; break;
    default: cout << "El caso por defecto" << endl; break;
  }

}