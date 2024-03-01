#include <iostream>
using namespace std;

int main () {
  float num = 0.0f;

  if ( num > 0 ) {
    cout << "Positivo" << endl;
  } else if (num < 0) {
    cout << "Negativo" << endl;
  } else {
    cout << "Cero" << endl;
  }
}