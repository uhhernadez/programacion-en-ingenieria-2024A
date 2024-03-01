#include <iostream>
using namespace std;

int main () {
  int respuesta;
  cout << "Tienes problema? " << endl;
  cout << "1 - Si, 0 - No, -1 - Tal vez" << endl;
  cin >> respuesta;
  if (respuesta == 1) {
    cout << "Resuelve" << endl;
  }
  if (respuesta == 0) {
    cout << "No hagas nada" << endl;
  }
  if (respuesta == -1) {
    cout << "Esta bien" << endl;  
  }
}
