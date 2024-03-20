#include <iostream>
using namespace std;

int main () {
  int num = 3;

  cout << "Dame un valor para el numero " << endl;
  cin >> num ;

  if (num % 2) { // Si el número es impar, el resultado es 1
    cout << "El numero '" << num << "' es impar" << endl;
  } else {
    cout << "El numero '" << num << "' es par" << endl;
  }

}