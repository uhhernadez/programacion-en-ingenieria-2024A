#include <iostream>
using namespace std;

int main () {
  int num = 110;
  // El número es múltiplo de 5
  if ( num % 5 == 0) {
    // El número es múltiplo de 11
    if ( num % 11 == 0) {
      cout << "El numero 'num' = " 
          << num << " es multiplo de 5 y 11" << endl;
    } else {
      cout << "El numero no es multiplo de 5 y 11" << endl;
    }
  } else {
    cout << "El numero no es multiplo de 5 y 11" << endl;
  }

}