#include <iostream>
using namespace std;

int main () {
  float a = 10.7;
  float b = -3.9;

  if (a > b) {
    cout << "El valor de 'a' = " << a << 
            " es mayor que 'b' = " << b << endl;
  } else {
    cout << "El valor de 'b' = " << b << 
            "es mayor que 'a' " << a << endl;
  }
}