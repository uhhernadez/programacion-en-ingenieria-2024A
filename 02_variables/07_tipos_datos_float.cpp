#include <iostream>
using namespace std;

int main () {
  float uno_cero = 1.0/0.0;
  float cero_cero = 0.0/0.0;
  float cero_uno = 0.0/1.0;
  cout << " 1/0 " << uno_cero << "\n";
  cout << " 0/0 " << cero_cero << "\n";
  cout << " 0/1 " << cero_uno << "\n";
}