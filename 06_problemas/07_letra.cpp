#include <iostream>
using namespace std;

int main () {
  char letra = 67;
  cout << letra << endl;

  if (letra >= 65) {
      if (letra <= 90) {
        cout << "La variable es una letra " << letra << endl;
      }
  }

    if (letra >= 'a') {
      if ( letra <= 'z') {
        cout << "La variable es una letra " << letra << endl;
      }
  }
}